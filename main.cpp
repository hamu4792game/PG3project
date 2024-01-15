#include <iostream>
#include <thread>
#include <string>

void DrawThread(int num) {
	std::cout << "thread " << num << std::endl;
}


int main() {

	int num = 1;

	std::thread th1(DrawThread, num++);
	th1.join();

	std::thread th2(DrawThread, num++);
	th2.join();

	std::thread th3(DrawThread, num++);
	th3.join();

	return 0;
}

