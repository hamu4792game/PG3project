#include "Rectangle.h"
#include <cmath>
#include <iostream>

Rectangle::Rectangle(const float& width, const float& height) {
	width_ = width;
	height_ = height;
}

Rectangle::~Rectangle() {

}

void Rectangle::Size() {
	area_ = height_ * width_;
}

void Rectangle::Draw() {
	std::wcout << "–ÊÏ = " << area_ << std::endl;
}
