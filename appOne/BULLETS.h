#pragma once
#include "libOne.h"
#include "GAME_OBJECT.h"
class BULLETS :
    public GAME_OBJECT
{
public:
	struct DATA {
		int totalNum;
		// 現在の弾の数を定義し、無駄な出力を無くすアルゴリズムを組むそう
		int curNum;
		int img;
		float advSpeed;
		float angSpeed;
		// bc = boundary circle(円を囲む) → キャラクタを囲む円の半径。当たり判定用
		float bcRadius;
	};
private:
	// 共通データ //
	DATA Bullet;
	// 単体データ配列 //
	struct BULLET {
		VECTOR2 pos;
		VECTOR2 vec;
		float angle;
	};
	BULLET* Bullets;
protected:
	void SetBullets(BULLETS::DATA& data);
public:
	BULLETS(class GAME* game);
	~BULLETS();
	void init();
	void launch(const VECTOR2& pos,const VECTOR2& vec);
	void update();
	void kill(int i);
	void draw();
};

