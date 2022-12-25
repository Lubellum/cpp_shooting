#pragma once
class GAME
{

private:
	// CONTAINER�Ƀ|�C���^��t���闝�R�́H�@GAME�N���X�̊O�̃N���X���p��(�H)���悤�Ƃ�������H
	// �A�h���X���擾���邽�߂̕ϐ�Container�̒�`�B(�^���|�C���^�^�ɂ��邱�ƂŃ|�C���^��������悤�ɂ���)
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
