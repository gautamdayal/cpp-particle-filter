#include <raylib.h>
#include <iostream>
#include <Eigen/Dense>
#include <raymath.h>
#include "Agents.h"
#include "Environment.h"

int main() {
    InitWindow(800, 600, "Winda");
    SetTargetFPS(60);

    // Create a render texture to use as the background instead of calling drawing functions each frame
    Environment bingus = Environment("src/walls.csv");
    Image mite_image = LoadImage("textures/mite.png");
    Texture2D mite = LoadTextureFromImage(mite_image);
    
    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            bingus.draw_environment();
            Rectangle source_rectangle = {0.0f, 0.0f, (float)mite.width, (float)mite.height};
            Rectangle dest_rectangle {400, 300, 20, 20};
            DrawTexturePro(mite, source_rectangle, dest_rectangle, {10, 10}, 0.0f, WHITE);

        EndDrawing();
    }
    UnloadTexture(mite);
    CloseWindow();
    return 0;
}
