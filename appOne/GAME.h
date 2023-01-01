#pragma once
class GAME
{

// �R���e�i //
private:
	// CONTAINER�Ƀ|�C���^��t���闝�R�́H�@GAME�N���X�̊O�̃N���X���p��(�H)���悤�Ƃ�������H
	// �A�h���X���擾���邽�߂̕ϐ�Container�̒�`�B(�^���|�C���^�^�ɂ��邱�ƂŃ|�C���^��������悤�ɂ���)
	class CONTAINER* Container;
public:
	class CONTAINER* container() { return Container; }

// �V�[�� //
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
	void changeScene(SCENE_ID sceneId);

// �L�����N�^ //
private:
	class PLAYER* Player;
	class ENEMIES* Enemies;
public:
	// �R���X�g���N�^�H�@�R���X�g���N�^�Ȃ�A����P���������ł����삷��H
	// (�N���X�̖��O�ƑS�������łȂ��ƃR���X�g���N�^�ɂȂ蓾�Ȃ��̂ł́H)
	class PLAYER* player() { return Player; }
	class ENEMIES* enemies() { return Enemies; }
public:
	GAME();
	~GAME();
	void run();
};
