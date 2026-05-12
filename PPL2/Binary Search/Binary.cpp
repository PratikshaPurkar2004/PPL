#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int key = 7;

    int low = 0, high = 8;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key) {
            cout << "Found at " << mid;
            return 0;
        }

        else if(arr[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    cout << "Not Found";

    return 0;
} 
