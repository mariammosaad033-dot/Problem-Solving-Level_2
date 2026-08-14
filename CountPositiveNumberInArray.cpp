#include <iostream>
#include<cstdlib>
using namespace std;

int RandomNumber(int from, int to)
{
    int randum = rand() % (to - from + 1) + from;
    return randum;
}

void FillArray(int arr[100], int& arrlength)
{
    cout << "please enter the number of element " << endl;
    cin >> arrlength;

    for (int i = 0;i < arrlength;i++)
    {
        arr[i] = RandomNumber(-100, 100);
    }
}

void printArray(int arr[100], int arrlength)
{
    for (int i = 0;i < arrlength;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int PositiveCount(int arr[100], int arrlength)
{
    int counter = 0;

    for (int i = 0;i < arrlength;i++)
    {
        if (arr[i] > 0)
        {
            counter++;
        }

    }
    return counter;
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrlength;

    FillArray(arr, arrlength);
    cout << "Array 1 element ";
    printArray(arr, arrlength);

    cout <<"\nPositive Numbers count is: ";
    cout << PositiveCount(arr, arrlength) << endl;

    return 0;
}
