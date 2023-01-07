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
void STAGE::init() {
	// �u.�v�Ɓu->(�A���[���Z�q)�v�̈Ⴂ�́H�@.���A�N���X��\���̂̃����o�����ɃA�N�Z�X������̂ŁA->�̓N���X��\���̂��̂��̂��w�������Hs
	game()->player()->init();
	game()->enemies()->init();
}
void STAGE::update() {
	game()->player()->update();
	game()->enemies()->update();
}
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