#include<stdio.h>

template <typename T>
T add(T a, T b) {
	return a < b ? b : a;
}
template <>
char add<char>(char a, char b) {
	printf("数字以外は代入できません\n");
	return '\0';
}

int main() {

	printf("%d\n", add<int>(114, 51));
	printf("%f\n", add<float>(114.0f, 51.4f));
	printf("%lf\n", add<double>(114.0, 51.4));
	printf("%c\n", add<char>(static_cast<char>('114'), static_cast <char>('514')));

	return 0;
}