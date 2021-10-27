#include <iostream>

using namespace std;

void helloWorld(string name, int age)
{
    cout << "Hello World, and you, " << name << "! You are " << age << " years old." << endl;
}

int main()
{
    cout << "let's see";
    helloWorld("John Doe", 20);
    helloWorld("ZeChen", 15);
    helloWorld("Mamase mamasa", 435);

    return 0;
}
