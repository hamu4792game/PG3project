#include<stdio.h>

template <typename T1,typename T2>
T1 add(T1 a, T2 b) {
	return a + b;
}
template <typename T>
T add(T a, T b) {
	return a + b;
}

int main() {

	printf("%d\n", add<int, float>(114, 51.4f));

	return 0;
}