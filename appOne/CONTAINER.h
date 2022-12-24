#pragma once
#include "TITLE.h"
#include "PLAYER.h"
class CONTAINER
{
	// TITLE::DATA�̎��̂��A���́uTITLE.h�v�Ƃ����ŁA2����Ă���H�@�Ƃ���������̓N���X�ł͂Ȃ��\���́H
	struct DATA {
		TITLE::DATA title;
		PLAYER::DATA player;
	};
	DATA Data;
public:
	void load();
	void setData();
	void loadGraphic();	

	// �Q��(�A�h���X���擾)�@���@�Q�Ƃ́A�A�h���X���m�肵�Ă��邱�Ƃ𖾎�
	// �|�C���^���Q��
	const TITLE::DATA& title() { return Data.title; }
	const PLAYER::DATA& player() { return Data.player; }
};