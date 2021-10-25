#include <iostream>
#include <cmath> // math functions

using namespace std;

int main()
{
    cout << (5 + 10) * 2 << endl; // you could do maths inside
    int wholeNum = 5;
    double decimalNum = 5.5;
    cout << wholeNum + decimalNum << endl; // when doing math between integer and double, it will convert the type to double
    cout << 10 / 3 << endl;                // integer division gives an integer answer
    cout << 10.0 / 3.0 << endl;            // decimal division gives an decimal answer

    // cmath
    cout << "cmath start" << endl;
    cout << pow(3, 3) << endl;   // 3^3
    cout << sqrt(36) << endl;    // square root of 36
    cout << round(4.6) << endl;  // round to nearest integer
    cout << floor(4.6) << endl;  // round down to nearest integer
    cout << fmax(3, 10) << endl; // returns the larger of the two numbers
    cout << fmin(3, 10) << endl; // returns the smaller of the two numbers

    return 0;
}
