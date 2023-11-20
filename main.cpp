#include <iostream>
#include <chrono>
#include <thread>
#include <random>
#include <functional>

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

		std::function<int(void)> InputComparison = [&]() {
			if (answer == "奇数") {
				return 1;
			}
			else if (answer == "偶数") {
				return 0;
			}
			else {
				std::wcout << "奇数か偶数を記入してください" << std::endl;
				return -1;
			}
		};

		//	true = 奇数　：　false = 偶数
		int flag = InputComparison();
		//	例外処理
		if (flag == -1) {
			continue;
		}

		uint16_t count = 3u;
		// 焦らしラムダ関数 void型 引数(int s = 現在の時間)
		std::function<void(int)> SetTimeOut = [](int s) {std::wcout << "結果まであと" << s << "秒" << std::endl; };

		do {
			// 結果までのカウント描画
			SetTimeOut(count);
			// 1秒待つ
			std::this_thread::sleep_for(std::chrono::seconds(1));
			//	時間を減らす
			count -= 1u;
		} while (count > 0u);
		
		//	指定範囲でランダム値の取得
		uint32_t result = RandNum(2, 12);
		std::wcout << "抽選結果：" << result << std::endl;
		//	true = 奇数　：　false = 偶数
		bool resultFlag = false;
		result % 2 == 0 ? resultFlag = false : resultFlag = true;

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