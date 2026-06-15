#include<vector>
using namespace std;

class Matrix
{
    private:
        int rows,cols;
    public:
        vector<vector<int>> mat;
        void input();
        void setZeroes(vector<vector<int>>& mat);
        void display();
};