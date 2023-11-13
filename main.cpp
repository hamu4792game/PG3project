#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bicycle.h"

int main() {

	Vehicle* vehicle[2];

	// 生成
	for (int i = 0; i < 2; i++) {
		if (i == 0) {
			vehicle[i] = new Car();
		}
		else {
			vehicle[i] = new Bicycle();
		}
	}
	std::wcout << std::endl;

	// 音を鳴らす
	for (auto& i : vehicle) {
		i->Played();
	}
	std::wcout << std::endl;

	// 削除
	for (auto& i : vehicle) {
		delete i;
	}

	return 0;
}