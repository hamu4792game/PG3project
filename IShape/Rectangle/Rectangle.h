#pragma once
#include "../IShape.h"

class Rectangle : public IShape
{
public:
	Rectangle(const float& width, const float& height);
	~Rectangle();

public: // ƒƒ“ƒoŠÖ”
	void Size() override;
	void Draw() override;

private: // ƒƒ“ƒo•Ï”
	float width_ = 0.0f;
	float height_ = 0.0f;

};
