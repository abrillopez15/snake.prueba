#include "raylib.h"

int main(void) {
    // Inicializa una ventana de 800x450 píxeles
    InitWindow(800, 450, "Mi primer ventana Raylib");
    SetTargetFPS(60);

    // Bucle principal del juego
    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("¡Raylib 6.0 funcionando en VS Code!", 160, 200, 24, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}