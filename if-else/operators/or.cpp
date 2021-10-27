#include <iostream>

using namespace std;

int main()
{
    // bool isMale = true;
    bool isMale = false;
    bool isGood = false;
    if (isMale || isGood) // only one has to be true
    {
        cout << "you are a good male" << endl;
    }
    else
    {
        cout << "you are not of male gender" << endl;
    }

    return 0;
}
