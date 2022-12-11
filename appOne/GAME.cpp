#include"libOne.h"
#include "TITLE.h"
#include "STAGE.h"
#include "GAME_CLEAR.h"
#include "GAME_OVER.h"
#include "GAME.h"
GAME::GAME() {
    /// new�Ƃ́H�@���@�������̓��I�Ǘ��H
    Scenes[TITLE_ID] = new TITLE(this);
    Scenes[STAGE_ID] = new STAGE(this);
    Scenes[GAME_CLEAR_ID] = new GAME_CLEAR(this);
    Scenes[GAME_OVER_ID] = new GAME_OVER(this);
    CurSceneId = TITLE_ID;
}
GAME::~GAME() {
    // delete�Ŋm�ۂ������������폜�H�@���@new�ƃZ�b�g���ۂ��B

    // �R���X�g���N�^(�N���X����I�u�W�F�N�g�쐬���ɐ�������郁�\�b�h�H)�ŁA�I�u�W�F�N�g�쐬���Ƀ��������m�ۂ��A
    // �f�X�g���N�^(�R���X�g���N�^�̋t�A�C���X�^���X�����ł��鎞�ɌĂяo����郁�\�b�h�H)�ŏ��Ŏ��Ƀ������������H
    // �q�[�v�̈�̗���Ɋ�����B
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
