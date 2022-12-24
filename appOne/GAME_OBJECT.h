#pragma once
class GAME_OBJECT
{
private:
	// ポインタ型→アドレスを覚えるための変数
	class GAME* Game = 0;
public:
	GAME_OBJECT(class GAME* game);
	virtual ~GAME_OBJECT();
	class GAME* game() {
		// privateだから見れないので、returnで間接的に参照させる。
		return Game;
	}
};

