#include "Car.h"
#include <iostream>

Car::Car() {
	name_ = "車";
	warningSound_ = "プップー";
	std::wcout << name_ << "が見えた" << std::endl;
}
