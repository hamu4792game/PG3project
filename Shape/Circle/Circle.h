#pragma once
#include "../IShape.h"

class Circle : public IShape
{
public:
	Circle(const float& radius);
	~Circle();

public: // メンバ関数
	void Size() override;
	void Draw() override;

private: // メンバ変数
	float radius_ = 0.0f;

};
