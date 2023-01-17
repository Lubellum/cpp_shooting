#pragma once
#include "libOne.h"
#include "GAME_OBJECT.h"
class BULLETS :
    public GAME_OBJECT
{
public:
	struct DATA {
		int totalNum;
		// ���݂̒e�̐����`���A���ʂȏo�͂𖳂����A���S���Y����g�ނ���
		int curNum;
		int img;
		float advSpeed;
		float angSpeed;
		// bc = boundary circle(�~���͂�) �� �L�����N�^���͂މ~�̔��a�B�����蔻��p
		float bcRadius;
	};
private:
	// ���ʃf�[�^ //
	DATA Bullet;
	// �P�̃f�[�^�z�� //
	struct BULLET {
		VECTOR2 pos;
		VECTOR2 vec;
		float angle;
	};
	BULLET* Bullets;
};

