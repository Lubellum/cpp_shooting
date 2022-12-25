#pragma once
class GAME
{

private:
	// CONTAINERにポインタを付ける理由は？　GAMEクラスの外のクラスを継承(？)しようとしたから？
	// アドレスを取得するための変数Containerの定義。(型をポインタ型にすることでポインタを扱えるようにする)
	class CONTAINER* Container;
public:
	class CONTAINER* container() { return Container; }
public:
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
