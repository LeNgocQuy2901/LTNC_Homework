#ifndef COMMON_FUNC_H_
#define COMMON_FUNC_H_

#include <windows.h>
#include <vector>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>
#include "BaseObject.h"


static  SDL_Window* g_window = NULL;
static SDL_Renderer* g_screen = NULL;

static SDL_Event g_event;

const int COLOR_KEY_R = 180;
const int COLOR_KEY_G = 180;
const int COLOR_KEY_B = 180;

const int RENDER_DRAW_COLOR = 0XFF;

//Screen
const int FRAMES_PER_SECOND = 55;
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 640;
namespace SDLCommonFunc
{
  bool CheckCollision(const SDL_Rect& object1, const SDL_Rect& object2);
  int MyRandom(int min, int max);
}

#endif