#include<stdio.h>
#include "Enemy.h"

int main() {
	Enemy enemy_;
	do {
		enemy_.Update();
	} while (!enemy_.GetDeadFlag());

	return 0;
}
