#pragma once
#include "GAME_OBJECT.h"
class PLAYER :
    public GAME_OBJECT
{
public:
    // ����̓R���X�g���N�^�H
    PLAYER(class GAME* game);
    void create();
    void init();
    void update();
    void draw();
};

