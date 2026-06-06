#include<vector>
using namespace std;

class SetMismatch{
    private:
    int n;

    public:
        vector<int> nums;
        void input();
        vector<int> findErrorNum(vector<int>& nums);
};