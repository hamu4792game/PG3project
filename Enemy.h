#pragma once

class Enemy {
public:
	Enemy();
	~Enemy() = default;
	//	更新処理
	void Update();

private: // メンバ変数
	enum class State {
		ShortDistanceAttack,
		LongDistanceAttack,
		WithDrawal,
	};
	State phase_ = State::ShortDistanceAttack;

	bool isDead_ = false;

public: // 自作メンバ関数
	void ShortDistanceAttack(); // 近距離攻撃
	void LongDistanceAttack();	// 遠距離攻撃:射撃
	void WithDrawal();			// 離脱

private:
	//	メンバ関数ポインタのテーブル
	static void (Enemy::* spFuncTable[])();

public: // ゲッター
	bool GetDeadFlag() { return isDead_; }

};