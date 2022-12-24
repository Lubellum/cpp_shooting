#include "CONTAINER.h"
void CONTAINER::load() {
	setData();
	// ロードするタイミングを分けたり…
	loadGraphic();
}
// 何故setDataでデータをセットし、loadで渡している？(感覚ではなんとなくわかる…)

// 外部ファイルから引っ張ってきているか否か
// JSON・XML・CSVでデータを引っ張ってくるものに書き換えれたらいいね
void CONTAINER::setData() {
	Data.title.backColor = COLOR(0, 20, 0);
	Data.title.textColor = COLOR(0, 255, 0);
	Data.title.textSize = 400;
	Data.title.pos.x = 450;
	Data.title.pos.y = 700;
	strcpy_s(Data.title.str, "NINJA");

	Data.player.angle = 0;
	Data.player.advSpeed = 300;
	Data.player.pos.x = 960;
	Data.player.pos.y = 970;
	Data.player.limitW = 100;
}

void CONTAINER::loadGraphic() {
	Data.player.img = loadImage("assets\\player.png");
}