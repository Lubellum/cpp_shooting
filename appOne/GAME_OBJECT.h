#pragma once
class GAME_OBJECT
{
private:
	// �|�C���^�^���A�h���X���o���邽�߂̕ϐ�
	class GAME* Game = 0;
public:
	GAME_OBJECT(class GAME* game);
	virtual ~GAME_OBJECT();
	class GAME* game() {
		// private�����猩��Ȃ��̂ŁAreturn�ŊԐړI�ɎQ�Ƃ�����B
		return Game;
	}
};

