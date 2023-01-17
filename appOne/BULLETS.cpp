#include "BULLETS.h"

// 「：」でGAME_OBJECTクラスの継承を行っている？　→　#include "○○.h"とは別物？
// そもそも#includeは「継承」と言うのか？
BULLETS::BULLETS(class GAME* game):
GAME_OBJECT(game){

}
BULLETS::~BULLETS(){}
void BULLETS::create(){}
void BULLETS::init(){}
void BULLETS::update(){}
void BULLETS::draw(){}