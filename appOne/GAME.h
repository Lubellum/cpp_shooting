#pragma once
class GAME
{

private:
	// CONTAINER�Ƀ|�C���^��t���闝�R�́H�@GAME�N���X�̊O�̃N���X���p��(�H)���悤�Ƃ�������H
	class CONTAINER* Container;
public:
	class CONTAINER* container() { return Container; }
public:
	enum SCENE_ID {
		// ����`�̏ꍇ�ɉ������Ȃ�...
		// NONE_ID = -1,
		TITLE_ID,
		STAGE_ID,
		GAME_CLEAR_ID,
		GAME_OVER_ID,
		NUM_SCENES
	};
private:
	// �N���X�|�C���^�H�@���@�N���X�̃A�h���X���擾?
	class SCENE* Scenes[NUM_SCENES];
	SCENE_ID CurSceneId;
public:
	GAME();
	~GAME();
	void run();
	void changeScene(SCENE_ID sceneId);
};
