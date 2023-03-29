#include <iostream>
#include "SDLgraphics.hpp"

#ifdef __cplusplus
extern "C"
#endif
int main(int argc, char** argv) {
	printf("SDL Template Project\n");
	SDLWindow window{ 1000, 600, "Template Window" };
	Uint32 col = window.mapColor(255, 0, 0);
	window.drawCircle(500, 300, 50, 20, col);
	window.update();
	int x;
	while (std::cin >> x) {}
	return 0;
}