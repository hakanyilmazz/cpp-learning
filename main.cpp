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

void switchCaseIntro()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "1";
        break;
    case 2:
        cout << "2";
        break;
    case 3:
        cout << "3";
        break;
    case 4:
        cout << "4";
    default:
        cout << "> 4";
        break;
    }
}

void loopsIntro()
{
    for (int i = 0; i < 3; i++)
    {
        cout << i << endl;
    }

    int i = 0;
    while (i < 3)
    {
        cout << i << endl;
        i++;
    }
}

void arraysIntro()
{
    int arr[4] = {0, 1, 2, 3};
    int arr1[] = {0, 1, 2, 3};

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int item : arr1)
    {
        cout << item << " ";
    }
}

void passingArrayToFunction(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    passingArrayToFunction(arr);
    return 0;
}
