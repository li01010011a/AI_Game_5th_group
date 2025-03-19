#include "First.h"
#include <vcclr.h>
using namespace System;

void First::draw(Graphics^ graphics, System::String^ s, int width, int height, int R, int G, int B) {
	Font font("Arial", 30);
	SolidBrush brush(Color::FromArgb(R, G, B));
	//System::String^ s = "Privet, Epileptiki!";

	interior_ptr<const Char> ppchar = PtrToStringChars(s);

	for (int i = 0; i < s->Length;i++) {
		wchar_t c = s[i];
		SolidBrush brush(Color::FromArgb(R+=10, G, B));
		graphics->DrawString(c.ToString(), % font, % brush, width+=20, height);
	}
		
	//graphics->DrawString("Privet, Epileptiki!", % font, % brush, width, height+30);
}
