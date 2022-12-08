#include "libOne.h"
#include "TITLE.h"
TITLE::TITLE(class GAME* game):
SCENE(game){
	
}
TITLE::~TITLE() {

}
void TITLE::draw() {
	clear();
	printSize(300);
	print("Title");
}
void TITLE::nextScene() {

}