#pragma once
#include "GAME_OBJECT.h"
#include "libOne.h"
class PLAYER :
    public GAME_OBJECT
{
public:
    struct DATA{
        int img;
        VECTOR2 pos;
        float advSpeed;
        float angle;
        float limitW;
    };
private:
    DATA Player;
public:
    // これはコンストラクタ？
    PLAYER(class GAME* game);
    void create();
    void init();
    void update();
    void draw();
};

