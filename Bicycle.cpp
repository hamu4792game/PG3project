#include "Bicycle.h"
#include <iostream>

Bicycle::Bicycle() {
	text = "���]�Ԃ�������";
	std::wcout << text << std::endl;
}

Bicycle::~Bicycle() {
	text = "���]�Ԃ͒ʂ�߂��Ă�����";
	std::wcout << text << std::endl;
}

void Bicycle::Played() {
	text = "�x���� : �`�������`������";
	std::wcout << text << std::endl;
}
