#pragma once
#include "../IShape.h"

class Circle : public IShape
{
public:
	Circle(const float& radius);
	~Circle();

public: // ƒƒ“ƒoŠÖ”
	void Size() override;
	void Draw() override;

private: // ƒƒ“ƒo•Ï”
	float radius_ = 0.0f;

};
