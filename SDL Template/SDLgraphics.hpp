#pragma once

#include "SDL_common.hpp"
#include <string>
#include <utility>

enum class Fonts {ARIAL, SANS, COMIC_SANS};

class SDLWindow {
private:
	static constexpr char
		imageName[] = "name.bmp"; //paths to images

	int w, h; //width & height
	std::string title;

	SDL_Surface* screen = nullptr;
	SDL_Texture* scrtex = nullptr;
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;
	TTF_Font* font = nullptr;

	struct {
		SDL_Surface
			* image = nullptr; //image pointer
	} images;
public:
	SDLWindow(int width, int height, std::string title);

	struct {
		Uint32 white{}, light_gray{}, dark_gray{}, light_red{}, light_green{}, light_blue{},
			red{}, green{}, blue{}, dark_red{}, dark_green{}, dark_blue{}, yellow{}, cyan{}, magenta{};
	} colors;

	inline int width() const { return w; } 
	inline int height() const { return h; }
	inline std::string windowTitle() const { return title; }

	Uint32 mapColor(int rgb) const;
	Uint32 mapColor(Uint8 r, Uint8 g, Uint8 b) const;
	SDL_Colour UintToColor(Uint32 color) const;

	void drawPixel(int x, int y, Uint32 color);
	void drawString(int x, int y, std::string text, int fontSize, Fonts fontName, Uint32 color);
	void drawLine(int x, int y, int l, int dx, int dy, Uint32 color);
	void drawRectangle(SDL_Rect rect, Uint32 fillColor);
	void drawRectangle(SDL_Rect rect, int thickness, Uint32 outlineColor, Uint32 fillColor);
	void drawCircle(int x, int y, int radius, int thickness, Uint32 fillColor);
	void drawImage();
	void update();

	~SDLWindow(); 
private:
	bool loadImages();
	void initColors();
};
