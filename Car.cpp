#include "Car.h"
#include <iostream>

Car::Car() {
	text = "車が見えた";
	std::wcout << text << std::endl;
}

Car::~Car() {
	text = "車は通り過ぎていった";
	std::wcout << text << std::endl;
}

void Car::Played() {
	text = "警告音 : プップー";
	std::wcout << text << std::endl;
}
