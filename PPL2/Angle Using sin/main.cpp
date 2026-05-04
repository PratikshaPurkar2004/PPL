#include <iostream>
#include "Angle.h"

using namespace std;

int main() {
    double A, B, a;

    cout << "Enter angle A, angle B and side a: ";
    cin >> A >> B >> a;

    Angle t(A, B, a);

    if (!t.isValid()) {
        cout << "Invalid input" << endl;
    } else {
        t.compute();
        t.display();
    }

    return 0;
}