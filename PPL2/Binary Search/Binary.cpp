#include <iostream>
#include "Binary.h"

using namespace std;

Binary::Binary()
{
    int temp[9] = {12,23,34,45,56,67,78,89,93};

    for(int i = 0; i < 9; i++)
    {
        arr[i] = temp[i];
    }

    key = 67;
}

void Binary::search()
{
    int low = 0, high = 8;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            cout << "Found at index " << mid;
            return;
        }

        else if(arr[mid] < key)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }

    cout << "Not Found";
}