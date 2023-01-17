#include "libOne.h"
#include "GAME.h"
#include "STAGE.h"
#include "PLAYER.h"
#include "ENEMIES.h"
STAGE::STAGE(class GAME* game) :
	SCENE(game) {

}
STAGE::~STAGE() {

}
// ------------------------------------------------------------------------------
//  初期化
// ------------------------------------------------------------------------------
void STAGE::init() {
	// 「.」と「->(アロー演算子)」の違いは？　
	// .が、クラスや構造体のメンバだけにアクセスするもので、
	// ->はクラスや構造体そのものを指し示す？
	game()->player()->init();
	// 以下と同義
	 /*GAME * Game = getGame();
	 PLAYER * player = Game->getPlayer();
	 player->init();*/
	game()->enemies()->init();
}
// --------------------------------
//  更新
// --------------------------------
void STAGE::update() {
	game()->player()->update();
	game()->enemies()->update();
}
// --------------------------------
//  描画
// --------------------------------
void STAGE::draw() {
	clear();
	game()->player()->draw();
	game()->enemies()->draw();
}
void STAGE::nextScene() {
	if (isTrigger(KEY_Z)) {
		game()->changeScene(GAME::GAME_CLEAR_ID);
	}
	else if (isTrigger(KEY_X)) {
		game()->changeScene(GAME::GAME_OVER_ID);
	}
}