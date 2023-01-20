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
}
void BULLETS::update(){
}
void BULLETS::draw(){
}