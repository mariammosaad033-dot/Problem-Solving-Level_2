#include <iostream>
#include <string>
using namespace std;

int ReadNumber(string Message)
{
    int number;
    cout << Message << endl;
    cin >> number;
    return number;
}

void ReadArray(int arr[100], int& arrLength)
{
    cout << "Enter the number of element" << endl;
    cin >> arrLength;

    cout << "\nEnter Array element" << endl;
    for (int i = 0;i < arrLength;i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
}
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int TimesRepeated(int arr[100],int arrLength, int NumberToCheck)
{
    int counter = 0;

    for (int i = 0;i < arrLength;i++)
    {
        if (arr[i] == NumberToCheck)
        {
            counter++;
        }
    }
    return counter;
}
int main()
{
    int arrLength, arr[100], NumberToCheck;

    ReadArray(arr, arrLength);
    cout << "\nOriginal array = ";
    PrintArray(arr, arrLength);

    NumberToCheck = ReadNumber("Enter the number you want to check : ");

    cout << "\nNumber " << NumberToCheck << " is repeated ";
    cout << TimesRepeated(arr,arrLength, NumberToCheck) << endl;

    return 0;
}
