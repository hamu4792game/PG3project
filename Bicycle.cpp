#include "Bicycle.h"
#include <iostream>

Bicycle::Bicycle() {
	text = "Ž©“]ŽÔ‚ªŒ©‚¦‚½";
	std::wcout << text << std::endl;
}

Bicycle::~Bicycle() {
	text = "Ž©“]ŽÔ‚Í’Ê‚è‰ß‚¬‚Ä‚¢‚Á‚½";
	std::wcout << text << std::endl;
}

void Bicycle::Played() {
	text = "Œx‰¹ : ƒ`ƒƒƒŠƒ“ƒ`ƒƒƒŠƒ“";
	std::wcout << text << std::endl;
}
