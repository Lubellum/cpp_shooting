#pragma once
#include "GAME_OBJECT.h"
class PLAYER :
    public GAME_OBJECT
{
public:
    // これはコンストラクタ？
    PLAYER(class GAME* game);
    void create();
    void init();
    void update();
    void draw();
};

