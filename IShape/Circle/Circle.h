#pragma once
#include "../IShape.h"

class Circle : public IShape
{
public:
	Circle(const float& radius);
	~Circle();

public: // �����o�֐�
	void Size() override;
	void Draw() override;

private: // �����o�ϐ�
	float radius_ = 0.0f;

};
