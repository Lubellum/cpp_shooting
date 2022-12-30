#include "CONTAINER.h"
void CONTAINER::load() {
	setData();
	// ロードするタイミングを分けたり…
	loadGraphic();
}

// JSON・XML・CSVでデータを引っ張ってくるものに書き換えれたらいいね
void CONTAINER::setData() {
	Data.title.backColor = COLOR(0, 20, 0);
	Data.title.textColor = COLOR(0, 255, 0);
	Data.title.textSize = 400;
	Data.title.pos.x = 450;
	Data.title.pos.y = 700;
	strcpy_s(Data.title.str, "NINJA");

	Data.player.angle = 0;
	Data.player.advSpeed = 300;
	Data.player.pos.x = 960;
	Data.player.pos.y = 970;
	Data.player.limitW = 100;

	Data.enemy.totalNum = 8;
	Data.enemy.majRadius = 700;
	Data.enemy.minRadius = 100;
	Data.enemy.centerPos = VECTOR2(960, -300);
	Data.enemy.fallSpeed = 60;
	Data.enemy.targetPosY = 300;
	Data.enemy.refTheta = 0;
	Data.enemy.thetaSpeed = 0.6f;
}

void CONTAINER::loadGraphic() {
	Data.player.img = loadImage("assets\\player.png");
	Data.enemy.img = loadImage("assets\\enemy.png");
}