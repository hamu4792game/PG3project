#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle() {
	name_ = nullptr;
	warningSound_ = nullptr;
}

Vehicle::~Vehicle() {
	std::wcout << name_ << "�͒ʂ�߂��Ă�����" << std::endl;
}

void Vehicle::Played() {
	std::wcout << "�x���� : " << warningSound_ << std::endl;
}
