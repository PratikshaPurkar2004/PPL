#include <vector>
using namespace std;

class ShuffleArray
{
    private:
    int n;
    vector<int>nums;
    //vector<int>ans(2*n);
    public:
        vector<int>shuffle(vector<int>&nums,int n);
};