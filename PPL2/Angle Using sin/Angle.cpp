#include <iostream>
#include <cmath>
#include "Angle.h"

using namespace std;

#define PI 3.141592653589793

Angle::Angle(double angleA, double angleB, double sidea) {
    A = angleA;
    B = angleB;
    a = sidea;
}

bool Angle::isValid() {
    return (A > 0 && B > 0 && (A + B) < 180);
}

void Angle::compute() {
    C = 180 - (A + B);

    double radA = A * PI / 180;
    double radB = B * PI / 180;
    double radC = C * PI / 180;

    b = (a * sin(radB)) / sin(radA);
    c = (a * sin(radC)) / sin(radA);
}

void Angle::display() {
    cout << "Angles: " << A << " " << B << " " << C << endl;
    cout << "Sides: " << a << " " << b << " " << c << endl;
}