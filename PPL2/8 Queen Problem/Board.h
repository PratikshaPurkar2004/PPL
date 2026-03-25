//Roll No=MS2519

#ifndef BOARD_H
#define BOARD_H
#include "Queen.h"

class Board{
    private:
       Queen *q[8];
       bool moveQueen(int r);
       bool isUnderAttack(const int r,const int c);
    public:
       Board();
       bool place();
       void print();
};

#endif