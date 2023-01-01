#include "CONTAINER.h"
#include "GAME.h"
#include "ENEMIES.h"

ENEMIES::ENEMIES(class GAME* game):
GAME_OBJECT(game){

}
ENEMIES::~ENEMIES(){
	delete[] Enemies;
}
void ENEMIES::create(){
	// ENEMIES.h���́uEnemy�v�Ƃ͕ʂ̕ϐ��H���O��ԁH
	Enemy = game()->container()->enemy();
	Enemies = new ENEMY[Enemy.totalNum];
}
void ENEMIES::init(){
	// ���W�A���Ŋp�x���`�B
	// �u3.1415926f * 2�v��2��=360�� ���AEnemy�̐��Ŋ����Ă���B
	float divTheta = 3.1415926f * 2 / Enemy.totalNum;
	for (int i = 0; i < Enemy.totalNum; i++) {
		Enemies[i].ofsetTheta = divTheta * i;
	}
}
void ENEMIES::update(){
	if(Enemy.centerPos.y < Enemy.targetPosY)
	for (int i = 0; i < Enemy.totalNum; i++) {
		float theta = Enemy.refTheta + Enemies[i].ofsetTheta;
		float px = Enemy.centerPos.x + cos(theta) * Enemy.majRadius;
		float py = Enemy.centerPos.y + sin(theta) * Enemy.minRadius;
		Enemies[i].pos.x = px;
		Enemies[i].pos.y = py;
	}
}
void ENEMIES::draw(){

}