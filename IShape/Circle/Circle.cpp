#include "Circle.h"
#include <cmath>
#include <numbers>
#include <iostream>

Circle::Circle(const float& radius) {
	radius_ = radius;
}

Circle::~Circle() {

}

void Circle::Size() {
	area_ = std::powf(radius_, 2.0f) * std::numbers::pi_v<float>;
}

void Circle::Draw() {
	std::wcout << "–ÊÏ = " << area_ << std::endl;
}
