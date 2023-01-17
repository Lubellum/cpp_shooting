#pragma once
#include "libOne.h"
#include "GAME_OBJECT.h"
class BULLETS :
    public GAME_OBJECT
{
public:
	struct DATA {
		int totalNum;
		int curNum;
	};
private:
	DATA Bullet;
	struct BULLET {
		VECTOR2 pos;
		VECTOR2 vec;
		float angle;
	};
	BULLET* Bullets;
};

