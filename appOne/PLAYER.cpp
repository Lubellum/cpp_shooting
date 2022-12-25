#include "CONTAINER.h"
#include "GAME.h"
#include "PLAYER.h"
PLAYER::PLAYER(class GAME* game):
GAME_OBJECT(game){
}
void PLAYER::create(){
	// �A���[���Z�q�Œl�����������Ă��Ă���H
	// �|�C���^���|�C���^��player()
	Player = game()->container()->player();
}
void PLAYER::init(){
}
void PLAYER::update(){
	if (Player.pos.x > Player.limitW && isPress(KEY_A)) {
		Player.pos.x += -Player.advSpeed * delta;
	}
	else if (Player.pos.x < width - Player.limitW && isPress(KEY_D)) {
		Player.pos.x += Player.advSpeed * delta;
	}
}
void PLAYER::draw(){
	image(Player.img, Player.pos.x, Player.pos.y, Player.angle);
}