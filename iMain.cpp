#include "iGraphics.h"

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
int x = 0;
int y = 0;
int r = 255;
int g = 255;
int b = 255;

void iDraw()
{
	iClear();
	iFilledRectangle(x+20, y+20, 100, 100);
	iSetColor(r, g, b);
}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{

}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{

}

void iMouse(int button, int state, int mx, int my)
{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		x = mx - 20;
		y = my - 20;
	}


	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == 'u')
	{
		y = y + 20;
	}
	if (key == 'm')
	{
		y = y - 20;
	}
	if (key == 'j')
	{
		x = x + 20;
	}
	if (key == 'h')
	{
		x = x - 20;
	}
	if (key == 'r')
	{
		r = 255;
		g = 0;
		b = 0;
	}
	if (key == 'g')
	{
		r = 0;
	    g = 255;
		b = 0;
	}
	if (key == 'b')
	{
		r = 0;
		g = 0;
		b = 255;
	}


}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{


	if (key == GLUT_KEY_RIGHT)
	{

	}
	if (key == GLUT_KEY_LEFT)
	{

	}

	if (key == GLUT_KEY_INSERT)
	{
		r = 0;
		g = 255;
		b = 0;
	}

}


int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(600, 400, "Esha");
	///updated see the documentations
	iStart();
	return 0;
}
