#include <iostream>
using namespace std;

int main() {
    int n, binary = 0, place = 1;

    cout << "Enter decimal number: ";
    cin >> n;

    while (n != 0) {
        int rem = n % 2;
        binary += rem * place;
        n /= 2;
        place *= 10;
    }

    cout << "Binary: " << binary;
    return 0;
}