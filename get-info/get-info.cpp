#include <iostream>
#include <string>

using namespace std;

int main()
{
    // int?
    int age;
    cout << "enter your age:" << endl;
    cin >> age;

    cout << "you are " << age << " years old" << endl;

    // stirng?
    string name;
    cout << "enter your name:" << endl;
    getline(cin, name);

    cout << "you are " << name << ", are you not?" << endl;

    return 0;
}
