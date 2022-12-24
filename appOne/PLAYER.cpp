#include "CONTAINER.h"
#include "GAME.h"
#include "PLAYER.h"
PLAYER::PLAYER(class GAME* game):
GAME_OBJECT(game){
}
void PLAYER::create(){
	// アロー演算子で値を引っ張ってきている？
	// ポインタ→ポインタ→player()
	Player = game()->container()->player();
}
void PLAYER::init(){
}
void PLAYER::update(){
	if (isPress(KEY_A)) {
		Player.pos.x += -Player.advSpeed * delta;
	}
}
void PLAYER::draw(){
}