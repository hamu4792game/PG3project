#include<stdio.h>
#include <iostream>

template <typename T1, typename T2>
class Comparison {
public:
	T1 numOne;
	T2 numSecond;
	//	コンストラクタ
	Comparison(T1 a, T2 b) : numOne(a), numSecond(b) {};

	//	小さい方値を返す
	T1 Min() { return numOne < numSecond ? numOne : numOne == numSecond ? numOne : static_cast<T1>(numSecond); }

};




int main() {

	Comparison<int, int> num1(1, 2);
	Comparison<float, float> num2(1.1f, 2.2f);
	Comparison<double, double> num3(1.1, 2.2);
	Comparison<int, float> num4(1, 0.1f);
	Comparison<int, double> num5(2, 1.1);
	Comparison<float, double> num6(1.0f, 0.1);

	std::wcout << num1.Min() << std::endl;
	std::wcout << num2.Min() << std::endl;
	std::wcout << num3.Min() << std::endl;
	std::wcout << num4.Min() << std::endl;
	std::wcout << num5.Min() << std::endl;
	std::wcout << num6.Min() << std::endl;

	return 0;
}