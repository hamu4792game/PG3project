#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle() {
	name_ = nullptr;
	warningSound_ = nullptr;
}

Vehicle::~Vehicle() {
	std::wcout << name_ << "‚Í’Ê‚è‰ß‚¬‚Ä‚¢‚Á‚½" << std::endl;
}

void Vehicle::Played() {
	std::wcout << "Œx‰¹ : " << warningSound_ << std::endl;
}
