#pragma once
#include "GAME_OBJECT.h"
class SCENE :
    public GAME_OBJECT
{
public:
    SCENE(class GAME* game);
    // virtual ���@���z�֐��@�h���N���X����ł����N���X�̊֐����㏑���ł���H�I�[�o�[���C�h�H
    virtual ~SCENE();
    virtual void create();
    virtual void init();
    virtual void proc();
    virtual void update();
    virtual void draw();
    virtual void nextScene();
};
