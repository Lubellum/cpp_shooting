#include"libOne.h"
#include "TITLE.h"
#include "STAGE.h"
#include "GAME_CLEAR.h"
#include "GAME_OVER.h"
#include "CONTAINER.h"
#include "GAME.h"
// そもそもここで何をしている？　GAMEクラスを継承したGAME関数？の定義？　　→　　コンストラクタで、クラス生成時の処理？
GAME::GAME() {
	Container = new CONTAINER;
	// newとは？　→　メモリの動的管理？
	// クラスの中でクラスのインスタンスを作っている
	this->Scenes[TITLE_ID] = new TITLE(this);
	Scenes[STAGE_ID] = new STAGE(this);
	Scenes[GAME_CLEAR_ID] = new GAME_CLEAR(this);
	Scenes[GAME_OVER_ID] = new GAME_OVER(this);
	CurSceneId = TITLE_ID;
}

GAME::~GAME() {
	// deleteで確保したメモリを削除？　→　newとセットっぽい。

	// コンストラクタ(クラスからオブジェクト作成時に生成されるメソッド？)で、オブジェクト作成時にメモリを確保し、
	// デストラクタ(コンストラクタの逆、インスタンスが消滅する時に呼び出されるメソッド？)で消滅時にメモリも消す？
	// ヒープ領域の流れに感じる。
	for (int i = 0; i < NUM_SCENES; i++) {
		delete Scenes[i];
	}
}

// void の使い方がわかっていない。
//「void クラス名::run()メソッド」で、GAMEクラスを継承したrun()メソッドを定義(voidで、数値は渡さない)ということ？
// 「void型」というもの？
// GAMEクラスのrun関数の中身を定義→run関数はGAME.hにある。
void GAME::run() {
	window(1920, 1080, full);

	Container->load();
	Scenes[TITLE_ID]->create();
	while (notQuit) {
		Scenes[CurSceneId]->proc();
	}
}

void GAME::changeScene(SCENE_ID sceneId) {
	CurSceneId = sceneId;
}
