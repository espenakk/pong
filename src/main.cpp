
#include "Game.hpp"
#include "Visuals.hpp"

int main() {
    const int screenWidth = 1280;
    const int screenHeight = 720;

    Visuals visuals(screenWidth, screenHeight);
    Game game;

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(LIGHTGRAY);
        DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, WHITE);
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