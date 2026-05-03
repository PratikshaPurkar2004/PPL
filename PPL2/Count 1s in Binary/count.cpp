#include <iostream>
#include "count.h"
using namespace std;

count::count(int num)
{
    n=num;
}

void count::input()
{
    cout << "Enter decimal number: ";
    cin >> n;
}

int count::countOnes() {
    int temp = n;
    int count = 0;

    while (temp > 0) {
        if (temp % 2 == 1)
            count++;
        temp /= 2;
    }

    return count;
}