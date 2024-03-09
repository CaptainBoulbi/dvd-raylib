#include <stdio.h>

#include "raylib.h"

int main(void){
    const int screenWidth = 667;
    const int screenHeight = 424;

    InitWindow(screenWidth, screenHeight, "DVD");
    SetTargetFPS(60);

    Texture2D dvd = LoadTexture("dvd.png");

    const int recwidth = dvd.width;
    const int recheight = dvd.height;
    int recx = 0;
    int recy = 0;
    int dx = 3;
    int dy = 3;

    while (!WindowShouldClose()) {
        BeginDrawing();
        {
            ClearBackground(WHITE);

            DrawTexture(dvd, recx, recy, WHITE);

            if (recx < 0 || recx+recwidth >= screenWidth) {
                dx = -dx;
                recx += dx;
            }
            if (recy < 0 || recy+recheight >= screenHeight) {
                dy = -dy;
                recy += dy;
            }

            recx += dx;
            recy += dy;
        }
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
