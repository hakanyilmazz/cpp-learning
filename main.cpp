#include <iostream>

using namespace std;

void ifElseIntro()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "It is even number";
    }
    else
    {
        cout << "It is odd number";
    }
}

int main()
{
    ifElseIntro();

    return 0;
}
