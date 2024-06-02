#include <raylib.h>
#include <iostream>
#include <ParticleFilter.h>

int main() {
    std::cout << "Test program" << std::endl;

    InitWindow(800, 600, "Winda");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        // std::cout << "Window Currently Open" << std::endl;
        BeginDrawing();
            ClearBackground((Color){245, 245, 245, 255});
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
