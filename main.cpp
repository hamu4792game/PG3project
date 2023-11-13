#include <iostream>
#include "Shape/Rectangle/Rectangle.h"
#include "Shape/Circle/Circle.h"
#include "Shape/IShape.h"

int main() {

	IShape* iShape[2];

	// 生成
	iShape[0] = new Circle(5.0f);
	iShape[1] = new Rectangle(2.0f, 5.0f);

	// 計算処理
	for (auto& i : iShape) {
		i->Size();
	}
	// 描画処理
	for (auto& i : iShape) {
		i->Draw();
	}

	// 削除
	for (auto& i : iShape) {
		delete i;
	}

	return 0;
}