#include <iostream>
#include <string>
#include <chrono>

int main() {
	
	std::cout << "100.000文字を移動とコピーで比較しました" << std::endl;
	std::string text(100000, 'a');

	std::chrono::steady_clock::time_point now = std::chrono::steady_clock::now();

	std::string cText = text;

	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	auto time = end - now;

	auto msec = std::chrono::duration_cast<std::chrono::microseconds>(time);
	std::cout << "コピー : " << msec << std::endl;


	now = std::chrono::steady_clock::now();
	
	cText = std::move(text);
	end = std::chrono::steady_clock::now();

	time = end - now;
	msec = std::chrono::duration_cast<std::chrono::microseconds>(time);
	std::cout << "移動 : " << msec << std::endl;



	return 0;
}