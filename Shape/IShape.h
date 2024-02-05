#pragma once

class IShape
{
public:
	IShape() = default;
	virtual ~IShape() = default;
public: // メンバ関数
	// 面積を求める
	virtual void Size() = 0;
	// 値を表示する
	virtual void Draw() = 0;

};