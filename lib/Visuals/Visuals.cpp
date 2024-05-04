
#include "Visuals.hpp"

Visuals::Visuals(int width, int height): width_(width), height_(height) {
    InitWindow(width_, height_, "Pong");
    SetTargetFPS(60);
}

void Visuals::drawBall(Ball ball) {
    DrawCircle(ball.x, ball.y, ball.radius, GREEN);
}

void Visuals::drawPaddle(Paddle player) {
    DrawRectangle(player.x, player.y, player.width, player.height, player.colour);
}

void Visuals::drawScore(Paddle player1, Paddle player2) {
    DrawText(TextFormat("%i", player1.score), 3 * width_ / 4 - 20, 20, fontSize_, WHITE);
    DrawText(TextFormat("%i", player2.score),  width_ / 4 - 20, 20, fontSize_, WHITE);
}