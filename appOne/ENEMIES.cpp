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
	// ENEMIES.h内の「Enemy」とは別の変数？名前空間？
	Enemy = game()->container()->enemy();
	Enemies = new ENEMY[Enemy.totalNum];
}
void ENEMIES::init(){
	// ラジアンで角度を定義。
	// 「3.1415926f * 2」が2π=360° を、Enemyの数で割っている。
	// 向きでしかない。2πで方向だけを定義。2πrのrをlimit→0で消して疑似的に角度だけを表現
	float divTheta = 3.1415926f * 2 / Enemy.totalNum;
	for (int i = 0; i < Enemy.totalNum; i++) {
		Enemies[i].ofsetTheta = divTheta * i;
	}
}
void ENEMIES::update(){
	if (Enemy.centerPos.y < Enemy.targetPosY) {
		Enemy.centerPos.y += Enemy.fallSpeed * delta;
		// もしtargetPosYを超えていたら、targetPosYに位置を定義する
		if (Enemy.centerPos.y >= Enemy.targetPosY) {
			Enemy.centerPos.y = Enemy.targetPosY;
		}
	}
	// Enemyの位置を定義
	for (int i = 0; i < Enemy.totalNum; i++) {
		float theta = Enemy.refTheta + Enemies[i].ofsetTheta;
		float px = Enemy.centerPos.x + cos(theta) * Enemy.majRadius;
		float py = Enemy.centerPos.y + sin(theta) * Enemy.minRadius;
		Enemies[i].pos.x = px;
		Enemies[i].pos.y = py;
	}
	// Enemyを回転させる。
	Enemy.refTheta += Enemy.thetaSpeed * delta;
}
void ENEMIES::draw(){
	for (int i = 0; i < Enemy.totalNum; i++) {
		image(Enemy.img, Enemies[i].pos.x, Enemies[i].pos.y);
	}
}