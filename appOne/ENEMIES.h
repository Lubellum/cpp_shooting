#pragma once
#include "GAME_OBJECT.h"
#include "libOne.h"
class ENEMIES :
    public GAME_OBJECT
{
public:
    struct DATA {
        // 画像の読み込みは型がintで良い？　(intは整数を扱うはずなのに、何故画像の読み込みに使える？)
        int img;
        int totalNum;
        // 長い方の半径 なんで型をfloatで定義？
        float majRadius;
        float minRadius;
        VECTOR2 centerPos;
        float fallSpeed;
        float targetPosY;
    };
private:
    // 共通データ →　敵キャラは全て同じ画像を使う、createで生成するなど共通の動きをするものをまとめる //
    DATA Enemy;
public:
    ENEMIES(class GAME* game);
    ~ENEMIES();
    void create();
    void init();
    void update();
    void draw();
};

