#include "libOne.h"
#include "CONTAINER.h"
#include "GAME.h"
#include "TITLE.h"
TITLE::TITLE(class GAME* game):
SCENE(game){
	
}
TITLE::~TITLE() {

}
void TITLE::create() {
	// �A���[���Z�q�@���@�N���X�̃����o�ɃA�N�Z�X���邽�߂Ɏg���H�@�Ӗ������I�ɂ́u.�v�Ƃقړ����H
	Title = game()->container()->title();
}
void TITLE::draw() {
	clear(Title.backColor);
	fill(Title.textColor);
	textSize(Title.textSize);
	text(Title.str, Title.pos.x, Title.pos.y);
}
void TITLE::nextScene() {
	if (isTrigger(KEY_Z)) {
		game()->changeScene(GAME::STAGE_ID);
	}
}