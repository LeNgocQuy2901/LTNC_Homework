#include "PlayerObject.h"
#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 640


BaseObject g_background;
bool InitData()
{
    BOOL bSucess = true;
    int ret = SDL_Init(SDL_INIT_VIDEO);
    if (ret < 0)
        return false;

    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1");

    g_window = SDL_CreateWindow("FlappyBird", 
                                SDL_WINDOWPOS_UNDEFINED,
                                SDL_WINDOWPOS_UNDEFINED,
                                SCREEN_WIDTH, SCREEN_HEIGHT,
                                SDL_WINDOW_SHOWN);

    if (g_window != NULL)
    {
        g_screen = SDL_CreateRenderer(g_window, -1, SDL_RENDERER_ACCELERATED||SDL_RENDERER_PRESENTVSYNC);
        if (g_screen != NULL)
        {
            SDL_SetRenderDrawColor(g_screen, RENDER_DRAW_COLOR, 
                                             RENDER_DRAW_COLOR, 
                                             RENDER_DRAW_COLOR, 
                                             RENDER_DRAW_COLOR);
            int imgFlags = IMG_INIT_PNG;
            if (!(IMG_Init(imgFlags) && imgFlags))
                bSucess = false;
        }
   
    }

    return bSucess;
}


bool LoadBackground()
{
    bool ret = g_background.LoadImageFile("img/bkgn.png", g_screen);
    return ret;
}


void close()
{
    g_background.Free();
    SDL_DestroyRenderer(g_screen);
    g_screen = NULL;

    SDL_DestroyWindow(g_window);
    g_window = NULL;

    IMG_Quit();
    SDL_Quit();
}

int main(int argc, char* argv[])
{
    if (InitData() == false)
    {
        return -1;
    }

    bool quit = false;

    if (!LoadBackground())
    {
        return -1;
    }

    PlayerObject player;
    player.LoadImg("img/fl_bird.png", g_screen);
    player.SetRect(100, 100);
    while (!quit)
    {
       
        while (SDL_PollEvent(&g_event) != 0)
        {
            if (g_event.type == SDL_QUIT)
            {
                quit = true;
            }

            player.HandleInputAction(g_event, g_screen);
        }

        SDL_SetRenderDrawColor(g_screen, RENDER_DRAW_COLOR, 
                                RENDER_DRAW_COLOR, 
                                RENDER_DRAW_COLOR, 
                                RENDER_DRAW_COLOR);

        SDL_RenderClear(g_screen);

        g_background.Render(g_screen, NULL);

        player.DoFalling(g_screen);
        player.Show(g_screen);
        SDL_RenderPresent(g_screen);
        SDL_Delay(20);
       
    }

    close();
    return 0;
}
