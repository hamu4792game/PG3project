#include "Bicycle.h"
#include <iostream>

Bicycle::Bicycle() {
	name_ = "自転車";
	warningSound_ = "チャリンチャリン";
	std::wcout << name_ << "が見えた" << std::endl;
}
