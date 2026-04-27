#include <iostream>
using namespace std;

int main() {
    int decimal, octal = 0, place = 1, remainder;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    while (decimal != 0) {
        remainder = decimal % 8;
        octal += remainder * place;
        decimal /= 8;
        place *= 10;
    }

    cout << "Octal number: " << octal;

    return 0;
}