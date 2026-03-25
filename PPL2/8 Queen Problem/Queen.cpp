//Roll No=MS2519

#include "Queen.h"
Queen::Queen(int r,int c){
    _row=r;
    _col=c;
}

int Queen::getRow() const{
    return _row;
}

int Queen::getCol() const{
    return _col;
}

void Queen::setCol(int c){
    _col=c;
}

