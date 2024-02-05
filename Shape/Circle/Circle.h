#pragma once
#include "../IShape.h"

class Circle : public IShape
{
public:
	Circle(const float& radius);
	~Circle() override;

public: // メンバ関数
	void Size() override;
	void Draw() override;

private: // メンバ変数
	float area_ = 0.0f; // 面積
	float radius_ = 0.0f;

};
