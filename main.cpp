#include "raylib.h"

int main() {
    const int screenWidth = 960;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Raylib Starter Template");
    int health = 100;
     
    SetTargetFPS(60);


    while (!WindowShouldClose()) {
        if (IsKeyPressed(KEY_H)) health -= 1.0f;

        BeginDrawing();
        ClearBackground(RAYWHITE);
        Drawtext
        EndDrawing();
    }

    CloseWindow();
    return 0;
}