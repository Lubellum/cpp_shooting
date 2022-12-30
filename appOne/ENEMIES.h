#pragma once
#include "GAME_OBJECT.h"
#include "libOne.h"
class ENEMIES :
    public GAME_OBJECT
{
public:
    struct DATA {
        // �摜�̓ǂݍ��݂͌^��int�ŗǂ��H�@(int�͐����������͂��Ȃ̂ɁA���̉摜�̓ǂݍ��݂Ɏg����H)
        int img;
        int totalNum;
        // �������̔��a �Ȃ�Ō^��float�Œ�`�H
        float majRadius;
        float minRadius;
        VECTOR2 centerPos;
        float fallSpeed;
        float targetPosY;
    };
private:
    // ���ʃf�[�^ ���@�G�L�����͑S�ē����摜���g���Acreate�Ő�������Ȃǋ��ʂ̓�����������̂��܂Ƃ߂� //
    DATA Enemy;
public:
    ENEMIES(class GAME* game);
    ~ENEMIES();
    void create();
    void init();
    void update();
    void draw();
};

