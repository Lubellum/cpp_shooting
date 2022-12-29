#include "libOne.h"
#include "GAME.h"
#include "STAGE.h"
#include "PLAYER.h"
STAGE::STAGE(class GAME* game) :
	SCENE(game) {

}
STAGE::~STAGE() {

}
void STAGE::update() {
	game()->player()->update();
}
void STAGE::draw() {
	clear();
	game()->player()->draw();
}
void STAGE::nextScene() {
	if (isTrigger(KEY_Z)) {
		game()->changeScene(GAME::GAME_CLEAR_ID);
	}
	else if (isTrigger(KEY_X)) {
		game()->changeScene(GAME::GAME_OVER_ID);
	}
}