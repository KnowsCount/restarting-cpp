#include <iostream>

using namespace std;

int main()
{
    // type name[] = {value1, value2, value3, ...};
    int someNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int fiveNumbers[5] = {1, 2, 3, 4, 5}; // the array can only contain five values

    // modifing the array?
    someNumbers[0] = 100;
    cout << someNumbers[0] << endl;

    // accessing the array?
    cout << "The first element is: " << someNumbers[0] << endl;
    cout << "The last element is: " << someNumbers[9] << endl;

    return 0;
}
