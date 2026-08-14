#include <iostream>
#include <cstdlib>
using namespace std;

int ReadNumber(string Message)
{
    int number;
    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

int RandomNumber(int from, int to)
{
    int Randum = rand() % (to - from + 1) + from;
    return Randum;
}

void FillArrayWithRandomNUmbers(int arr[100], int& arrLength)
{
    cout << "please enter number of element" << endl;
    cin >> arrLength;

    for (int i = 0;i < arrLength;i++)
    {
        arr[i] = RandomNumber(1,100);
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
int  FindNumberPositionInArray(int arr[100], int arrLength, int number)
{
    for (int i = 0;i < arrLength;i++)
    {
        if (arr[i] == number)
        {
            return i;
        } 
     }
    return -1;
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;
    
    FillArrayWithRandomNUmbers(arr, arrLength);
    cout << "Array element : ";
    PrintArray(arr, arrLength);
    
    int number = ReadNumber("please enter the number you search for ");

    int NumberPosition= FindNumberPositionInArray(arr, arrLength, number);

    if (NumberPosition == -1)
    {
        cout << "The number is not found" << endl;
    }
    else
    {
        cout << "The number you look for at position " << NumberPosition << endl;
        cout << "The number found its order  " << NumberPosition+1 << endl;
    }

    return 0;
}
