#include <iostream>

using namespace std;

int main()
{
    // bool isMale = true;
    bool isMale = true;
    bool isGood = true;
    if (isMale && isGood) // if one of them is false, the whole expression is false
    {
        cout << "you are a good male" << endl;
    }
    else if (isMale && !isGood)
    {
        cout << "you are a bad male" << endl;
    }
    else if (!isMale && isGood)
    {
        cout << "you are good but not of male gender" << endl;
    }
    else
    {
        cout << "you are not good, or not of male gender" << endl;
    }

    return 0;
}
