#include<vector>
using namespace std;
class Prime
{
    private:
    int n;
    public:
        vector <vector<int>>nums;
        void input();
        bool isPrime(int n);
        int diagonalPrime();
};