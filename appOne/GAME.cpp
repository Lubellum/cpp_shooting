#include"libOne.h"
#include "TITLE.h"
#include "STAGE.h"
#include "GAME_CLEAR.h"
#include "GAME_OVER.h"
#include "GAME.h"
GAME::GAME() {
    /// newとは？　→　メモリの動的管理？
    Scenes[TITLE_ID] = new TITLE(this);
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
void GAME::run() {
    window(1920, 1080, full);
    while (notQuit) {
        Scenes[CurSceneId]->proc();
    }
}

void GAME::changeScene(SCENE_ID sceneId) {
    CurSceneId = sceneId;
}
