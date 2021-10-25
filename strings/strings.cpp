#include <iostream>

using namespace std;

int main()
{
    cout << "KnowsCount" << endl; // = cout << "Knowscount\n"

    string msg = "KnowsCount";
    cout << msg << endl;               // = cout << "KnowsCount\n"
    cout << msg.length() << endl;      // prints out the length of the string
    cout << msg[5] << endl;            // prints out the character at index 2
    cout << msg.find("Count") << endl; // prints out the index of the first occurance of "Count"
}
