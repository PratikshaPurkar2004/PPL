#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{
    vector<int>price={100, 80, 60, 70, 60, 75, 85};
    vector<int>ans(price.size(), 0);
    stack<int>stk;
    for(int i=0;i<price.size();i++)
    {
        while(stk.size()>0 && price[stk.top()]<=price[i])
            stk.pop();
        if(stk.empty())
            ans[i]=i+1;
        else
            ans[i]=i-stk.top();
        stk.push(i);
    }
    for(int i=0;i<ans.size();i++)//for(int val:ans) cout<<val<<" ";
        cout<<ans[i]<<" ";
    return 0;
}