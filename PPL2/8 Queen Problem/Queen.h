// Roll No=MS2519

#ifndef QUEEN_H
#define QUEEN_H

class Queen{
    private:
       int _row;
       int _col;
    public:
       Queen(int r,int c);
       int getRow() const;
       int getCol() const;
       void setCol(int c);
};
#endif