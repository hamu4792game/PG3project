#pragma once

class Enemy {
public:
	Enemy();
	~Enemy() = default;
	//	�X�V����
	void Update();

private: // �����o�ϐ�
	enum class State {
		ShortDistanceAttack,
		LongDistanceAttack,
		WithDrawal,
	};
	State phase_ = State::ShortDistanceAttack;

	bool isDead_ = false;

public: // ���상���o�֐�
	void ShortDistanceAttack(); // �ߋ����U��
	void LongDistanceAttack();	// �������U��:�ˌ�
	void WithDrawal();			// ���E

private:
	//	�����o�֐��|�C���^�̃e�[�u��
	static void (Enemy::* spFuncTable[])();

public: // �Q�b�^�[
	bool GetDeadFlag() { return isDead_; }

};