#include <raylib.h>
#include <iostream>
#include <Eigen/Dense>
#include <raymath.h>
// #include <ParticleFilter.h>
#include "Environment.h"

int main() {
    InitWindow(800, 600, "Winda");
    SetTargetFPS(60);

    // Create a render texture to use as the background instead of calling drawing functions each frame
    Environment bingus = Environment();
    
    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground((Color){245, 245, 245, 255});
        // DrawRectangle(wall_start[0], wall_start[1], 5, 200, (Color){0, 0, 255, 255});
        // DrawRectangle(wall_end[0], wall_end[1], 200, 5, (Color){0, 0, 255, 255});
            bingus.draw_environment();
            DrawRectangle(10, 10, 20, 20, (Color){255, 0, 0, 255});
            DrawRectangle(10, 500, 20, 20, (Color){0, 255, 0, 255});
            DrawRectangle(500, 500, 20, 20, (Color){0, 0, 255, 255});
            DrawRectangle(500, 10, 20, 20, (Color){255, 255, 0, 255});
        EndDrawing();
    }
        
    CloseWindow();
    return 0;
}
