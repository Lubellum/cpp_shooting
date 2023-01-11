#include "libOne.h"
#include "TITLE.h"
#include "STAGE.h"
#include "GAME_CLEAR.h"
#include "GAME_OVER.h"
#include "CONTAINER.h"
#include "PLAYER.h"
#include "ENEMIES.h"
#include "GAME.h"
GAME::GAME() {
	Container = new CONTAINER;
	// newとは？　→　メモリの動的管理？
	// クラスの中でクラスのインスタンスを作っている
	this->Scenes[TITLE_ID] = new TITLE(this);
	Scenes[STAGE_ID]       = new STAGE(this);
	Scenes[GAME_CLEAR_ID]  = new GAME_CLEAR(this);
	Scenes[GAME_OVER_ID]   = new GAME_OVER(this);

	// 変数のスコープは関数の中だけでは？
	Player = new PLAYER(this);
	Enemies = new ENEMIES(this);
}

GAME::~GAME() {
	// 後にnewしてメモリを確保したものから、順番にdeleteでメモリを解放
	delete Enemies;
	delete Player;
	// ヒープ領域
	for (int i = 0; i < NUM_SCENES; i++) {
		delete Scenes[i];
	}
	delete Container;
}

void GAME::run() {
	window(1920, 1080, full);

	Container->load();
	Scenes[TITLE_ID]->create();
	Player->create();
	Enemies->create();

	CurSceneId = TITLE_ID;
	Scenes[CurSceneId]->init();
	initDeltaTime();
	while (notQuit) {
		setDeltaTime();
		Scenes[CurSceneId]->proc();
		print(delta);
	}
}

void GAME::changeScene(SCENE_ID sceneId) {
	CurSceneId = sceneId;
	Scenes[CurSceneId]->init();
}
