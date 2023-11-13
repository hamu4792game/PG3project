#pragma once
#include "../IShape.h"

class Rectangle : public IShape
{
public:
	Rectangle(const float& width, const float& height);
	~Rectangle();

public: // メンバ関数
	void Size() override;
	void Draw() override;

private: // メンバ変数
	float width_ = 0.0f;
	float height_ = 0.0f;

};
