#pragma once

class Vehicle {
public:
	// コンストラクタ
	Vehicle();
	// デストラクタ
	virtual ~Vehicle();

public:
	// 音を鳴らした
	virtual void Played();

protected:
	const char* name_;
	const char* warningSound_;

};

