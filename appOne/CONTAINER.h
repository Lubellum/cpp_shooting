#pragma once
#include "TITLE.h"
class CONTAINER
{
	// TITLE::DATA�̎��̂��A���́uTITLE.h�v�Ƃ����ŁA2����Ă���H�@�Ƃ���������̓N���X�ł͂Ȃ��\���́H
	struct DATA {
		TITLE::DATA title;
	};
	DATA Data;
public:
	void load();
	void setData();
	// �Ȃ�Ł���t���Ă���H�@�A�h���X���擾���Ă���H(���������A�������ɂ��Ă��A�h���X���擾�o����́H)
	const TITLE::DATA& title() { return Data.title; }
};