#include "GAME.h"
void gmain() {
	// インスタンス毎にアドレスが違う。「これ」がthis。同じこれでも指している先が違う。
	//　スタック
	GAME game;
	// インスタンス
	game.run();
}
