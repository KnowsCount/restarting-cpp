#include <iostream>

using namespace std;

// declare a return type: void, int, string, etc.
double cube(double i)
{
    // double result = i * i * i;
    // return result;
    return i * i * i;
    // everything below return will not be executed
    cout << "this will not be executed";
}

int main()
{
    double answer = cube(2.435);
    cout << answer << endl;
    return 0;
}
