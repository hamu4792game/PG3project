#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle() {
	name_ = nullptr;
	warningSound_ = nullptr;
}

Vehicle::~Vehicle() {
	std::wcout << name_ << "は通り過ぎていった" << std::endl;
}

void Vehicle::Played() {
	std::wcout << "警告音 : " << warningSound_ << std::endl;
}
