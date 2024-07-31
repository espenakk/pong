
#ifndef PONG_GAME_HPP
#define PONG_GAME_HPP

#include "Ball.hpp"
#include "Paddle.hpp"

class Game {
public:
    Game();
    void update();
    void movePlayerUp(Paddle player);
    void movePlayerDown(Paddle player);
    void invertBallSpeed();
    void updateScore();

    bool checkPaddleCollision();
    bool checkLeftWallCollision();
    bool checkRightWallCollision();
    bool checkRoofCollision();
    bool checkFloorCollision();

    void resetBall();

    Paddle player1;
    Paddle player2;
    Ball ball;

private:
};


#endif//PONG_GAME_HPP
