#pragma once
class Car {
public:
	// �R���X�g���N�^
	Car();
	// �f�X�g���N�^
	virtual ~Car();

public:
	// ����炵��
	virtual void Played();

protected:
	const char* text;

};

