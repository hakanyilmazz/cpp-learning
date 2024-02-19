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

void pointers()
{
    int number = 1;
    int *numberPtr = &number;

    cout << "Address of number: " << &number << endl;
    cout << "Address value of numberPtr: " << numberPtr << endl;
    cout << "Value of numberPtr: " << *numberPtr << endl;
}

void pointersSwapValues()
{
    int x = 1;
    int y = 10;

    int *xPtr = &x;
    int *yPtr = &y;

    cout << "Before: " << *xPtr << " - " << *yPtr << endl;

    *xPtr = *xPtr + *yPtr;
    *yPtr = *xPtr - *yPtr;
    *xPtr = *xPtr - *yPtr;

    cout << "After: " << *xPtr << " - " << *yPtr << endl;
}

void pointerToPointer()
{
    int x = 1;
    int *y = &x;
    int **z = &y;

    cout << x << endl;
    cout << *y << endl;
    cout << **z << endl;
}

int main()
{
    
    return 0;
}
