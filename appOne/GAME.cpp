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

}
void GAME::run() {
    window(1920, 1080, full);
    while (notQuit) {
        Scenes[CurSceneId]->proc();
    }
}