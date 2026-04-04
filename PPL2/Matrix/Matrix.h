#include<string>
using namespace std;
class Matrix
{
    public:
        int rows,cols;
        int mat[10][10];
    public:
        Matrix();
        Matrix(int r,int c);
        ~Matrix();
        void input(string filename);
        Matrix operator +(Matrix m);
        Matrix operator -(Matrix m);
        Matrix operator *(Matrix m);
        void show();
};