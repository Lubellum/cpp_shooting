#pragma once
#include "GAME_OBJECT.h"
class SCENE :
    public GAME_OBJECT
{
public:
    SCENE(class GAME* game);
    // virtual →　仮想関数　派生クラスからでも基底クラスの関数を上書きできる？オーバーライド？
    virtual ~SCENE();
    virtual void create();
    virtual void init();
    virtual void proc();
    virtual void update();
    virtual void draw();
    virtual void nextScene();
};
