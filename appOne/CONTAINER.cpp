#include "CONTAINER.h"
void CONTAINER::load() {
	setData();
}
// ����setData�Ńf�[�^���Z�b�g���Aload�œn���Ă���H(���o�ł͂Ȃ�ƂȂ��킩��c)
void CONTAINER::setData() {
	Data.title.backColor = COLOR(0, 20, 0);
	Data.title.textColor = COLOR(0, 255, 0);
	Data.title.textSize = 400;
	Data.title.pos.x = 450;
	Data.title.pos.y = 700;
	strcpy_s(Data.title.str, "NINJA");
}