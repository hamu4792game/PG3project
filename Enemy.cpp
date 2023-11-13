#include "Enemy.h"
#include <iostream>

//	関数テーブル
void (Enemy::*Enemy::spFuncTable[])() = {
	&Enemy::ShortDistanceAttack, // 近距離攻撃
	&Enemy::LongDistanceAttack,	 // 遠距離攻撃:射撃
	&Enemy::WithDrawal,			 // 離脱
};

Enemy::Enemy() {
	phase_ = State::ShortDistanceAttack;
	isDead_ = false;
}

void Enemy::Update() {
	//	メンバ関数ポインタに入っている現在の状態の関数を呼び出す
	(this->*spFuncTable[static_cast<size_t>(phase_)])();

	/*//	フェーズの加算
	auto handle = static_cast<size_t>(phase_);
	handle++;
	phase_ = static_cast<State>(handle);*/

}

void Enemy::ShortDistanceAttack() {
	std::wcout << "現在の状態：近接" << std::endl;
	phase_ = State::LongDistanceAttack;
}

void Enemy::LongDistanceAttack() {
	std::wcout << "現在の状態：射撃" << std::endl;
	phase_ = State::WithDrawal;
}

void Enemy::WithDrawal() {
	std::wcout << "現在の状態：離脱" << std::endl;
	isDead_ = true;
}
