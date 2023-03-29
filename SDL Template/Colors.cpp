#include "SDLgraphics.hpp"

//Creating defined colors here

void SDLWindow::initColors() {
	colors.white = mapColor(0xDDDDDD);
	colors.light_gray = mapColor(0x7E7E7E);
	colors.dark_gray = mapColor(0x333333);
	colors.light_red = mapColor(0xFFAAAA);
	colors.light_green = mapColor(0xAAFFAA);
	colors.light_blue = mapColor(0xAAAAFF);
	colors.red = mapColor(0xFF0000);
	colors.green = mapColor(0x00FF00);
	colors.blue = mapColor(0x0000FF);
	colors.dark_red = mapColor(0xAA0000);
	colors.dark_green = mapColor(0x00AA00);
	colors.dark_blue = mapColor(0x0000AA);
	colors.yellow = mapColor(0xFFFF00);
	colors.cyan = mapColor(0x00FFFF);
	colors.magenta = mapColor(0xFF00FF);
}