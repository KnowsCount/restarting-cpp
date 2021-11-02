/*
 * @Date: 02/11/2021 13.38.04 +0800
 * @Author: KnowsCount
 * @LastEditTime: 02/11/2021 13.49.17 +0800
 * @FilePath: /restarting-cpp/better-calc/calc.cpp
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // declaring the variables
    double num1, num2;
    string method;
    double result;
    // getting user input
    cout << "enter the first number:" << endl;
    cin >> num1;
    cout << "enter the second number:" << endl;
    cin >> num2;
    cout << "enter your method:" << endl;
    cin >> method;
    // calculator
    if (method == "+")
    {
        result = num1 + num2;
        cout << "result is: " << result << endl;
    }
    else if (method == "-")
    {
        result = num1 - num2;
        cout << "result is: " << result << endl;
    }
    else if (method == "*")
    {
        result = num1 * num2;
        cout << "result is: " << result << endl;
    }
    else if (method == "/")
    {
        result = num1 / num2;
        cout << "result is: " << result << endl;
    }
    else
    {
        // if the user entered something wrong
        cout << "please enter a mathematical sign." << endl;
    };

    return 0;
}