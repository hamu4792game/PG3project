#include "Car.h"
#include <iostream>

Car::Car() {
	text = "�Ԃ�������";
	std::wcout << text << std::endl;
}

Car::~Car() {
	text = "�Ԃ͒ʂ�߂��Ă�����";
	std::wcout << text << std::endl;
}

void Car::Played() {
	text = "�x���� : �v�b�v�[";
	std::wcout << text << std::endl;
}
