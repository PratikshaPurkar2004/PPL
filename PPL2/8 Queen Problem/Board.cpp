//Roll No=MS2519

#include<iostream>
#include<cmath>
#include "Board.h"
using namespace std;

Board::Board()
{
    for(int i=0;i<8;i++)
        q[i]=new Queen(i,-1);
}

bool Board::isUnderAttack(const int r,const int c)
{
    for(int i=0;i<r;i++)
    {
        int col=q[i]->getCol();
        if(col==c)
            return true;
        if(abs(col-c)==abs(i-r))
            return true;   
    }
    return false;
}

bool Board:: moveQueen(int r)
{
    if(r==8)
        return true;
    for(int c=0;c<8;c++)
    {
        if(!isUnderAttack(r,c))
        {
            q[r]->setCol(c);
            if(moveQueen(r+1))
                return true;
        }
    }
    return false;
}

bool Board::place()
{
    return moveQueen(0);
}

void Board::print()
{
    for(int r=0;r<8;r++)
    {
        for(int c=0;c<8;c++)
        {
            if(q[r]->getCol()==c)
                cout<<" Q ";
            else
                cout<<" - ";
        }
        cout<<endl;
    }
}