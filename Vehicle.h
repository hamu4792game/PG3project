#pragma once

class Vehicle {
public:
	// �R���X�g���N�^
	Vehicle();
	// �f�X�g���N�^
	virtual ~Vehicle();

public:
	// ����炵��
	virtual void Played();

protected:
	const char* name_;
	const char* warningSound_;

};

