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
	// アロー演算子　→　クラスのメンバにアクセスするために使う？　意味合い的には「.」とほぼ同じ？
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