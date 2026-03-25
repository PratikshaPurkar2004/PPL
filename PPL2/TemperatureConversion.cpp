#include <iostream>
using namespace std;

int main()
{
    float temp,ans;
    char unit;

    cout << "Enter temperature : ";
    cin >> temp ;
    cout << "Enter unit (C/F): ";
    cin >> unit;

    if (unit == 'C' || unit == 'c')
    {
        ans = (temp * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit :: " ;
        cout << ans;
     }

    else if (unit == 'F' || unit == 'f')
    {
        ans = (temp - 32) * 5 / 9;
        cout << "Temperature in Celsius ::"; 
        cout<< ans;
    }

    else
        cout << "Invalid unit";

    return 0;
}
