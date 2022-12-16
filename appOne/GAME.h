#pragma once
class GAME
{
public:
	// enumは列挙型　→　メンバ？に数字をつけている？
	enum SCENE_ID {
		TITLE_ID,
		STAGE_ID,
		GAME_CLEAR_ID,
		GAME_OVER_ID,
		NUM_SCENES
	};
private:
	// クラスポインタ？　→　クラスのアドレスを取得?
	class SCENE* Scenes[NUM_SCENES];
	SCENE_ID CurSceneId;
public:
	GAME();
	~GAME();
	void run();
	void changeScene(SCENE_ID sceneId);
};
