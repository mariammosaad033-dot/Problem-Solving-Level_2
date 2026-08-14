#include <iostream>
#include<cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
    int Randum = rand() % (To - From + 1) + From;
    return Randum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "Please enter the number of element" << endl;
    cin >> arrLength;

    for (int i = 0;i < arrLength;i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
    {
      cout<< arr[i]<<" ";
    }
    cout << endl;
}

void AddArrayElement(int arr[100], int &arrLength,int number)
{
    arrLength++;
    arr[arrLength - 1] = number;
}

void CopyArrayUsingAddArrayElement(int SourceArr[100], int DestinationArr[100], int arrLength, int &arr2Length)
{
    for (int i = 0;i < arrLength;i++)
    {
        AddArrayElement(DestinationArr, arr2Length, SourceArr[i]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arrLength;
    int arr2[100], arr2Length = 0;


    FillArrayWithRandomNumbers(arr1, arrLength);
    cout << "Array 1 element : ";
    PrintArray(arr1, arrLength);

    CopyArrayUsingAddArrayElement(arr1, arr2, arrLength, arr2Length);
    cout << "Array 2 element : ";
    PrintArray(arr2, arr2Length);

    return 0;
}
