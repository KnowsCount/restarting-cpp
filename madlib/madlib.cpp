#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    string color, noun, adjective;

    cout << "enter a color: ";
    getline(cin, color);
    cout << "enter a noun: ";
    getline(cin, noun);
    cout << "enter an adjective: ";
    getline(cin, adjective);

    cout << "Roses are " << color << endl;
    cout << noun << " are blue" << endl;
    cout << "Sugar is " << adjective << endl;
    cout << "And so are you" << endl;
}
