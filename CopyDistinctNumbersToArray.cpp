#include <iostream>
using namespace std;

void FillArray(int arr[100],int &arrLength)
{
    arrLength = 10;

    arr[0] = 90;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 10;
    arr[4] = 70;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 50;
    arr[9] = 70;
}
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int FindNumberPositionInArray(int arr[100], int arrLength, int number)
{
    for (int i = 0;i < arrLength;i++)
    {
        if (arr[i] == number)
            return i;
    }
    return -1;
}

bool IsNumberInArray(int arr[100], int arrLength, int number)
{
    return FindNumberPositionInArray(arr, arrLength, number) != -1;
}

void AddArrayElement(int arr[100], int& arrLength,int number)
{
    arrLength++;
    arr[arrLength - 1] = number;
}

void CopyDistinctNumbersToArray(int SourceArr[100], int arrLength, int DestinationArr[100], int& arr2Length)
{
    for(int i =0;i<arrLength;i++)
    { 
        
        if (!IsNumberInArray(DestinationArr, arr2Length, SourceArr[i]))
        {
            AddArrayElement(DestinationArr, arr2Length, SourceArr[i]);
        }

    }
}
int main()
{
    int arr1[100], arrLength;
    int arr2[100], arr2Length=0;

    cout << "Array 1 element : ";
    FillArray(arr1, arrLength);
    PrintArray(arr1, arrLength);

    CopyDistinctNumbersToArray(arr1, arrLength, arr2, arr2Length);

    cout << "Array 2 distinct Elements : ";
    PrintArray(arr2, arr2Length);

    return 0;
}
