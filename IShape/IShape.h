#pragma once

class IShape
{
public:
	IShape() = default;
	~IShape() = default;

protected: // �����o�ϐ�
	// �ʐ�
	float area_;

public: // �����o�֐�
	// �ʐς����߂�
	virtual void Size() = 0;
	// �l��\������
	virtual void Draw() = 0;

};