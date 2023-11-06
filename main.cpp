#include <iostream>
#include "IShape/Rectangle/Rectangle.h"
#include "IShape/Circle/Circle.h"
#include "IShape/IShape.h"

int main() {

	IShape* iShape[2];

	// 生成
	iShape[0] = new Circle(5.0f);
	iShape[1] = new Rectangle(2.0f, 5.0f);

	// 面積を計算して描画
	for (auto& i : iShape) {
		i->Size();
		i->Draw();
	}

	// 削除
	for (auto& i : iShape) {
		delete i;
	}

	return 0;
}