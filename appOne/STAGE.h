#pragma once
#include "SCENE.h"
class STAGE :
    public SCENE
{
public:
    STAGE(class GAME* game);
    ~STAGE();
    void update();
    void draw();
    void nextScene();
};
