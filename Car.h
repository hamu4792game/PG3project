#pragma once
class Car {
public:
	// コンストラクタ
	Car();
	// デストラクタ
	virtual ~Car();

public:
	// 音を鳴らした
	virtual void Played();

protected:
	const char* text;

};

