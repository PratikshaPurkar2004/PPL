#include<vector>
using namespace std;

class Matrix
{
    int rows,cols;
    vector<vector<int>> mat;
    public:
        void input();
        void display();
        void reshape(int r,int c);
};