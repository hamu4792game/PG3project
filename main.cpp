#include<stdio.h>
#include "Car.h"
#include "Bicycle.h"

int main() {

	Car* car[2];

	for (int i = 0; i < 2; i++) {
		if (i == 0) {
			car[i] = new Car;
		}
		else {
			car[i] = new Bicycle;
		}
	}

	for (auto& i : car) {
		i->Played();
	}

	for (auto& i : car) {
		delete i;
	}

	return 0;
}