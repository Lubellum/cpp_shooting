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
}
void BULLETS::update(){
}
void BULLETS::draw(){
}