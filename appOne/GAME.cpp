#include"libOne.h"
#include "TITLE.h"
#include "STAGE.h"
#include "GAME_CLEAR.h"
#include "GAME_OVER.h"
#include "CONTAINER.h"
#include "PLAYER.h"
#include "GAME.h"
GAME::GAME() {
	Container = new CONTAINER;
	// new�Ƃ́H�@���@�������̓��I�Ǘ��H
	// �N���X�̒��ŃN���X�̃C���X�^���X������Ă���
	this->Scenes[TITLE_ID] = new TITLE(this);
	Scenes[STAGE_ID] = new STAGE(this);
	Scenes[GAME_CLEAR_ID] = new GAME_CLEAR(this);
	Scenes[GAME_OVER_ID] = new GAME_OVER(this);
	CurSceneId = TITLE_ID;

	Player = new PLAYER(this);
}

GAME::~GAME() {
	delete Player;
	// �q�[�v�̈�̗���Ɋ�����B
	for (int i = 0; i < NUM_SCENES; i++) {
		delete Scenes[i];
	}
}

void GAME::run() {
	window(1920, 1080, full);

	Container->load();
	Scenes[TITLE_ID]->create();
	Player->create();

	initDeltaTime();
	while (notQuit) {
		setDeltaTime();
		Scenes[CurSceneId]->proc();
		print(delta);
	}
}

void GAME::changeScene(SCENE_ID sceneId) {
	CurSceneId = sceneId;
}
