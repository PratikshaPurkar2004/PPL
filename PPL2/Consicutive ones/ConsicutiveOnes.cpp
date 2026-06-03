#include<iostream>
#include<vector>
#include "ConsicutiveOnes.h"

using namespace std;


void ConsicutiveOnes::input()
{
    cout << "Enter size:";
    cin >> n;

    arr.resize(n);

    cout << "Enter array:";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

}

int ConsicutiveOnes::solve()
{
    int cnt=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cnt++;
            ans=max(cnt,ans);
        }
        else
        {
            cnt=0;
        }
    }
    return ans;
}