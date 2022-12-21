#include "CONTAINER.h"
void CONTAINER::load() {
	setData();
}
// 何故setDataでデータをセットし、loadで渡している？(感覚ではなんとなくわかる…)
void CONTAINER::setData() {
	Data.title.backColor = COLOR(0, 20, 0);
	Data.title.textColor = COLOR(0, 255, 0);
	Data.title.textSize = 400;
	Data.title.pos.x = 450;
	Data.title.pos.y = 700;
	strcpy_s(Data.title.str, "NINJA");
}