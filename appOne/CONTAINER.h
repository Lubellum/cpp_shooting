#pragma once
#include "TITLE.h"
class CONTAINER
{
	// TITLE::DATAの実体を、何故「TITLE.h」とここで、2つ作っている？　というかこれはクラスではなく構造体？
	struct DATA {
		TITLE::DATA title;
	};
	DATA Data;
public:
	void load();
	void setData();
	// なんで＆を付けている？　アドレスを取得している？(そもそも、＆を後ろにつけてもアドレスを取得出来るの？)
	const TITLE::DATA& title() { return Data.title; }
};