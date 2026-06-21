#include<vector>
using namespace std;

class Array
{
    private:
        int n;
        vector<int>arr;
        vector<int>ans;


    public:
        void input();
        void display();
        void findDisappearedNumbers();
};