#include <iostream>
#include <vector>   
using namespace std;
#include "SetMismatch.h"

int main()
{
    SetMismatch sm;
    sm.input();

    vector<int> result = sm.findErrorNum(sm.nums);

    cout << "Duplicate number: " << result[0] << endl;
    cout << "Missing number: " << result[1] << endl;

    return 0;
}