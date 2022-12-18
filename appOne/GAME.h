#pragma once
class GAME
{
//コンテナ
private:
	class CONTAINER* Container;
public:
	class CONTAINER* container() { return Container; }
public:
	// enumは列挙型　→　メンバ？に数字をつけている？
	enum SCENE_ID {
		// 未定義の場合に何もしない...
		// NONE_ID = -1,
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
