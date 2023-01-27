#include "BULLETS.h"

// 「：」でGAME_OBJECTクラスの継承を行っている？　→　#include "○○.h"とは別物？
// そもそも#includeは「継承」と言うのか？
BULLETS::BULLETS(class GAME* game):
GAME_OBJECT(game){

}
BULLETS::~BULLETS(){
	delete[] Bullets;
	// Bulletsをnewしたのはデストラクタの下だが、deleteが上にあっても処理準的に問題ないのだろうか？
	// (デストラクタはインスタンスが消滅したときの処理なので問題ない？)
	// じゃあ「インスタンスが消滅する時」とはどんな時？関数か何かがスコープの範囲外に出たとき？
}
void BULLETS::SetBullets(BULLETS::DATA& data) {
	Bullet = data;
	// ここで「BULLETSクラス」をnew出来ないのは何故？親クラスだから？
	// それなら何故、newでBULLETという構造体をnew出来るのか？
	// そもそもnewとは、どの範囲までヒープ領域にメモリを確保出来るのか？
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