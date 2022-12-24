#pragma once
#include "TITLE.h"
#include "PLAYER.h"
class CONTAINER
{
	// TITLE::DATAの実体を、何故「TITLE.h」とここで、2つ作っている？　というかこれはクラスではなく構造体？
	struct DATA {
		TITLE::DATA title;
		PLAYER::DATA player;
	};
	DATA Data;
public:
	void load();
	void setData();
	void loadGraphic();	

	// 参照(アドレスを取得)　→　参照は、アドレスが確定していることを明示
	// ポインタか参照
	const TITLE::DATA& title() { return Data.title; }
	const PLAYER::DATA& player() { return Data.player; }
};