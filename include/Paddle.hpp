
#ifndef PADDLE_HPP
#define PADDLE_HPP

#include <raylib.h>

struct Paddle {
    int x;
    int y;
    int width;
    int height;
    Color colour;
    int speed;
    int score = 0;
};

#endif