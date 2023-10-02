#include<stdio.h>

/// <summary>
/// 比較関数
/// </summary>
/// <param name="normal">通常時給</param>
/// <param name="recursive">再帰的な時給/param>
/// <param name="count">回数取得用変数/param>
/// <returns></returns>
int ComparisonFunction(int normal, int recursive, int count) {
	count++;
	int resultN = normal * count;
	int resultR = (recursive * 2 - 50);

	if (resultN > resultR) {
		return ComparisonFunction(normal, resultR, count);
	}
	return count;
}

int main() {
	//	基本時給
	int normal = 1072;
	//	再帰的な初期時給
	int recursive = 100;
	//	回数取得用
	int count = 0;

	printf("%d時間後に再帰的な賃金体系が勝った\n", ComparisonFunction(1072, 100, count));
	
	return 0;
}