#pragma once
#include "Car.h"
class Bicycle : public Car {
public:
	Bicycle();
	~Bicycle() override;

public:
	void Played() override;
};

