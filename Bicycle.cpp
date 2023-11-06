#include "Bicycle.h"
#include <iostream>

Bicycle::Bicycle() {
	text = "自転車が見えた";
	std::wcout << text << std::endl;
}

Bicycle::~Bicycle() {
	text = "自転車は通り過ぎていった";
	std::wcout << text << std::endl;
}

void Bicycle::Played() {
	text = "警告音 : チャリンチャリン";
	std::wcout << text << std::endl;
}
