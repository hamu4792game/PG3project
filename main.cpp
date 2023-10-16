#include <iostream>
#include <chrono>
#include <thread>
#include <random>

typedef void (*PFunc)(uint32_t);

void DispResult(uint32_t s) {
	std::wcout << "結果まであと" << s << "秒" << std::endl;
}

void SetTimeout(PFunc p, uint32_t second) {
	for (uint32_t i = 0; i < second; i++) {
		p(second - i);
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	
}

/// <summary>
/// 指定した範囲で実数値を返す
/// </summary>
/// <param name="min">最小値</param>
/// <param name="max">最大値</param>
/// <returns>指定した範囲の乱数</returns>
int RandNum(int min, int max) {
	//	ハードウェア乱数をシードにして初期化
	std::random_device seedGen;
	//	メルセンヌツイスター法で疑似乱数生成器の作成
	std::mt19937_64 randNum(seedGen());
	//	(min,max)の範囲で等間隔に乱数を生成 一様実数分布
	std::uniform_real_distribution<> dist(min, max);

	return static_cast<int>(dist(randNum));
}

int main() {

	while (true) {
		std::wcout << "奇数 or 偶数 ？" << std::endl;

		std::string answer;
		std::cin >> answer;

		//	true = 奇数　：　false = 偶数
		bool flag = false;

		//	記入
		if (answer == "奇数") {
			flag = true;
		}
		else if (answer == "偶数") {
			flag = false;
		}
		else {
			std::wcout << "奇数か偶数を記入してください" << std::endl;
			continue;
		}

		PFunc p;
		p = DispResult;
		SetTimeout(p, 3);

		//	指定範囲でランダム値の取得
		uint32_t result = RandNum(2, 12);
		std::wcout << "抽選結果：" << result << std::endl;
		//	true = 奇数　：　false = 偶数
		bool resultFlag = false;
		if (result % 2 == 0) {
			resultFlag = false;
		}
		else {
			resultFlag = true;
		}

		//	結果
		if (flag == resultFlag) {
			std::wcout << "正解です" << std::endl;
		}
		else {
			std::wcout << "不正解です" << std::endl;
		}
	}
	
	return 0;
}