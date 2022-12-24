#include "GAME_OBJECT.h"
// (class GAME* game) の部分では、GAME_OBJECTコンストラクタの引数の設定？
GAME_OBJECT::GAME_OBJECT(GAME* game) {
	// Gameでアドレスを覚えている。
	Game = game;
}
GAME_OBJECT::~GAME_OBJECT() {

}