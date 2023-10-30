#include "Enemy.h"
#include <iostream>

//	�֐��e�[�u��
void (Enemy::*Enemy::spFuncTable[])() = {
	&Enemy::ShortDistanceAttack, // �ߋ����U��
	&Enemy::LongDistanceAttack,	 // �������U��:�ˌ�
	&Enemy::WithDrawal,			 // ���E
};

Enemy::Enemy() {
	phase_ = State::ShortDistanceAttack;
	isDead_ = false;
}

void Enemy::Update() {
	//	�����o�֐��|�C���^�ɓ����Ă��錻�݂̏�Ԃ̊֐����Ăяo��
	(this->*spFuncTable[static_cast<size_t>(phase_)])();

	/*//	�t�F�[�Y�̉��Z
	auto handle = static_cast<size_t>(phase_);
	handle++;
	phase_ = static_cast<State>(handle);*/

}

void Enemy::ShortDistanceAttack() {
	std::wcout << "���݂̏�ԁF�ߐ�" << std::endl;
	phase_ = State::LongDistanceAttack;
}

void Enemy::LongDistanceAttack() {
	std::wcout << "���݂̏�ԁF�ˌ�" << std::endl;
	phase_ = State::WithDrawal;
}

void Enemy::WithDrawal() {
	std::wcout << "���݂̏�ԁF���E" << std::endl;
	isDead_ = true;
}
