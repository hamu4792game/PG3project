#pragma once
#include "../IShape.h"

class Rectangle : public IShape
{
public:
	Rectangle(const float& width, const float& height);
	~Rectangle();

public: // �����o�֐�
	void Size() override;
	void Draw() override;

private: // �����o�ϐ�
	float width_ = 0.0f;
	float height_ = 0.0f;

};
