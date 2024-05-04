
#include "Game.hpp"
#include "Visuals.hpp"
#include <iostream>
#include <raylib.h>

int main() {
    const int screenWidth = 1280;
    const int screenHeight = 720;

    Visuals visuals(screenWidth, screenHeight);
    Game game;

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(YELLOW);
        game.update();
        visuals.drawBall(game.ball);
        visuals.drawPaddle(game.player1);
        visuals.drawPaddle(game.player2);
        visuals.drawScore(game.player1, game.player2);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}