#include "BULLETS.h"

// �u�F�v��GAME_OBJECT�N���X�̌p�����s���Ă���H�@���@#include "����.h"�Ƃ͕ʕ��H
// ��������#include�́u�p���v�ƌ����̂��H
BULLETS::BULLETS(class GAME* game):
GAME_OBJECT(game){

}
BULLETS::~BULLETS(){
	delete[] Bullets;
	// Bullets��new�����̂̓f�X�g���N�^�̉������Adelete����ɂ����Ă��������I�ɖ��Ȃ��̂��낤���H
	// (�f�X�g���N�^�̓C���X�^���X�����ł����Ƃ��̏����Ȃ̂Ŗ��Ȃ��H)
	// ���Ⴀ�u�C���X�^���X�����ł��鎞�v�Ƃ͂ǂ�Ȏ��H�֐����������X�R�[�v�͈̔͊O�ɏo���Ƃ��H
}
void BULLETS::SetBullets(BULLETS::DATA& data) {
	Bullet = data;
	// �����ŁuBULLETS�N���X�v��new�o���Ȃ��͉̂��́H�e�N���X������H
	// ����Ȃ牽�́Anew��BULLET�Ƃ����\���̂�new�o����̂��H
	// ��������new�Ƃ́A�ǂ͈̔͂܂Ńq�[�v�̈�Ƀ��������m�ۏo����̂��H
	Bullets = new BULLET[Bullet.totalNum];
}
void BULLETS::init(){
	Bullet.curNum = 0;
}
void BULLETS::launch(const VECTOR2& pos, const VECTOR2& vec) {
	if (Bullet.curNum < Bullet.totalNum) {
		int i = Bullet.curNum;
		Bullets[i].pos = pos;
		Bullets[i].vec = vec;
		Bullets[i].angle = 0;
		Bullet.curNum++;
	}
}

void BULLETS::update(){
	for (int i = Bullet.curNum - 1; i >= 0; i--) {
		Bullets[i].pos += Bullets[i].vec * (Bullet.advSpeed * delta);
		Bullets[i].angle += Bullet.angSpeed * delta;
		if (Bullets[i].pos.y < Bullet.bcRadius ||
			Bullets[i].pos.y > height + Bullet.bcRadius ||
			Bullets[i].pos.x < Bullet.bcRadius ||
			Bullets[i].pos.x > width + Bullet.bcRadius) {
			kill(i);
		}
	}
}
void BULLETS::kill(int i) {
	Bullet.curNum--;
	Bullets[i] = Bullets[Bullet.curNum];
}
void BULLETS::draw(){
	for (int i; i < Bullet.curNum; i++) {
		image(Bullet.img, Bullets[i].pos.x, Bullets[i].pos.y, Bullets[i].angle);
	}
}