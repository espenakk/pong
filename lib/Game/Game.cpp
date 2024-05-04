
#include "Game.hpp"
#include <raylib.h>

Game::Game() {
    ball = {100, 100, 15, 5, 5};
    player1 = {10, GetScreenHeight() / 2 - 60, 25, 120, BLUE, 6};
    player2 = {GetScreenWidth() - 35, GetScreenHeight() / 2 - 60, 25, 120, RED, 6};
}

void Game::update() {
    ball.x += ball.speedX;
    ball.y += ball.speedY;

    if (player1.y - 15 >= 0) {
        if (IsKeyDown(KEY_W))
            player1.y -= 5;
    }
    if (player1.y + player1.height + 15 <= GetScreenHeight()) {
        if (IsKeyDown(KEY_S))
            player1.y += 5;
    }

    if (player2.y - 15 >= 0) {
        if (player2.y + player2.height / 2 >= ball.y) {
            player2.y -= 5;
        }
    }
    if (player2.y + player2.height + 15 <= GetScreenHeight()) {
        if (player2.y + player2.height / 2 <= ball.y) {
            player2.y += 5;
        }
    }
    invertBallSpeed();
    updateScore();
}

void Game::movePlayerUp(Paddle player) {
    player.y -= player.speed;
}

void Game::movePlayerDown(Paddle player) {
    player.y += player.speed;
}

// void Game::constrainPlayerMovement() {
    
// }

void Game::invertBallSpeed() {
    if (checkLeftWallCollision() || checkRightWallCollision() || checkPaddleCollision()) {
        ball.speedX *= -1;
    }
    if (checkFloorCollision() || checkRoofCollision()) {
        ball.speedY *= -1;
    }
}

void Game::updateScore() {
    if (checkRightWallCollision()) {
        player1.score++;
    }
    if (checkLeftWallCollision()) {
        player2.score++;
    }
}

bool Game::checkPaddleCollision() {
    if (CheckCollisionCircleRec(Vector2{(float) ball.x, (float) ball.y}, (float) ball.radius, Rectangle{(float) player1.x, (float) player1.y, (float) player1.width, (float) player1.height})) {
        return true;
    }
    if (CheckCollisionCircleRec(Vector2{(float) ball.x, (float) ball.y}, (float) ball.radius, Rectangle{(float) player2.x, (float) player2.y, (float) player2.width, (float) player2.height})) {
        return true;
    }
    return false;
}

bool Game::checkLeftWallCollision() {
    if (ball.x + ball.radius >= GetScreenWidth()) {
        return true;
    } else
        return false;
}

bool Game::checkRightWallCollision() {
    if (ball.x - ball.radius <= 0) {
        return true;
    } else
        return false;
}

bool Game::checkRoofCollision() {
    if (ball.y - ball.radius <= 0) {
        return true;
    } else
        return false;
}

bool Game::checkFloorCollision() {
    if (ball.y + ball.radius >= GetScreenHeight()) {
        return true;
    } else
        return false;
}
