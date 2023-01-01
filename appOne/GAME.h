#pragma once
class GAME
{

// コンテナ //
private:
	// CONTAINERにポインタを付ける理由は？　GAMEクラスの外のクラスを継承(？)しようとしたから？
	// アドレスを取得するための変数Containerの定義。(型をポインタ型にすることでポインタを扱えるようにする)
	class CONTAINER* Container;
public:
	class CONTAINER* container() { return Container; }

// シーン //
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
	void changeScene(SCENE_ID sceneId);

// キャラクタ //
private:
	class PLAYER* Player;
	class ENEMIES* Enemies;
public:
	// コンストラクタ？　コンストラクタなら、何故Pが小文字でも動作する？
	// (クラスの名前と全く同じでないとコンストラクタになり得ないのでは？)
	class PLAYER* player() { return Player; }
	class ENEMIES* enemies() { return Enemies; }
public:
	GAME();
	~GAME();
	void run();
};
