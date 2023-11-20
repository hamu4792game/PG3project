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

bool SetTimeOut(std::function<bool(void)>func, const uint16_t& count) {
	uint16_t result = count;
	do {
		// 結果までのカウント描画
		std::wcout << "結果まであと" << result << "秒" << std::endl;
		// 1秒待つ
		std::this_thread::sleep_for(std::chrono::seconds(1));
		//	時間を減らした値を返す
		result -= 1u;
	} while (result > 0u);
	
	return func();
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
		int answerFlag = InputComparison();
		//	例外処理
		if (answerFlag == -1) {
			continue;
		}
		uint16_t count = 3u;

		std::function<bool(void)> resultAnnouncement = []() {
			//	指定範囲でランダム値の取得
			uint32_t result = RandNum(2, 12);
			std::wcout << "抽選結果：" << result << std::endl;
			//	true = 奇数　：　false = 偶数
			if (result % 2 == 0) {
				return false;
			}
			return true;
		};

		bool resultFlag = SetTimeOut(resultAnnouncement, count);

		//	結果
		if (answerFlag == resultFlag) {
			std::wcout << "正解です" << std::endl;
		}
		else {
			std::wcout << "不正解です" << std::endl;
		}
	}

	return 0;
}