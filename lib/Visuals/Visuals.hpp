
#ifndef PONG_VISUALS_HPP
#define PONG_VISUALS_HPP

#include <raylib.h>
#include "Ball.hpp"
#include "Paddle.hpp"

class Visuals {
public:
    Visuals(int width, int height);
    void drawBall(Ball ball);
    void drawPaddle(Paddle player);
    void drawScore(Paddle player1, Paddle player2);

private:
    const int width_;
    const int height_;
    const int fontSize_ = 80;
};

#endif
