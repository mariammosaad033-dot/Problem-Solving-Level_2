#include <iostream>
#include<cstdlib>
using namespace std;

int Randomnumber(int from, int to)
{
    int randum = rand() % (to - from + 1) + from;
    return randum;
}

void FillArray(int arr[100], int& arrlength)
{
    cout << "please enter the number of element  " << endl;
    cin >> arrlength;

    for (int i = 0;i < arrlength;i++)
    {
        arr[i] = Randomnumber(1, 100);
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

int EvenCount(int arr[100], int arrlength)
{
    int counter = 0;

    for (int i = 0;i < arrlength;i++)
    {
        if (arr[i] % 2 == 0)
        {
            counter++;
        }

    }
    return counter;
}
int main()
{
    int arr[100], arrlength;

    FillArray(arr, arrlength);
    cout << "Array 1 element ";
    printArray(arr, arrlength);

    cout << "Even number count is :  ";
    cout << EvenCount(arr, arrlength);

    return 0;
}
