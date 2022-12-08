#include "libOne.h"
#include "STAGE.h"
STAGE::STAGE(class GAME* game) :
	SCENE(game) {

}
STAGE::~STAGE() {

}
void STAGE::draw() {
	clear();
	printSize(300);
	print("Stage");
}
void STAGE::nextScene() {

}