#include <iostream>
using namespace std;

void FillArray(int arr[100], int &arrlength)
{
    arrlength = 5;

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 20;
    arr[4] = 10;
}
void printArray(int arr[100], int arrlength)
{
    for (int i = 0;i < arrlength;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool IsPalindromeArray(int arr[100], int arrlength)
{
    for (int i = 0;i < arrlength;i++)
    {
        if (arr[i] != arr[arrlength-1-i])
          return false; 
    }
    return true;
}

void PrintPalindromeResult(int arr[100], int arrlength)
{
    if (IsPalindromeArray(arr, arrlength) == true)
        cout << "Array is palindrome \n";
    else
        cout << "Array is not palindrome \n";
}
int main()
{
    int arr[100], arrlength;

    FillArray(arr, arrlength);
    cout << "Array 1 element ";
    printArray(arr, arrlength);

    PrintPalindromeResult(arr,  arrlength);

    return 0;
}
