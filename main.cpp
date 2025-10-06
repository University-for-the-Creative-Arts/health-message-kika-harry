#include "raylib.h"
#include "string"

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
        DrawText(TextFormat("hea %.i lth", health), 480, 300, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}