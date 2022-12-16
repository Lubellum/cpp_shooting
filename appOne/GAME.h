#pragma once
class GAME
{
public:
	// enum�͗񋓌^�@���@�����o�H�ɐ��������Ă���H
	enum SCENE_ID {
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
