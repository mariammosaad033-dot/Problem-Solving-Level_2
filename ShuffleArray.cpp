#include <iostream>
#include<cstdlib>
using namespace std;

int RandomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}

void FillArrayWith1ToarrLength(int arr[100],int &arrLength)
{
    cout << "Please enter the number of element "<<endl;
    cin >> arrLength;

    for (int i = 0;i < arrLength;i++)
    {
        arr[i] = i+1;
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

void Swap(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void ShuffleArray(int arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
    {
        Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength ;

    FillArrayWith1ToarrLength(arr, arrLength);
    cout << "Array element before shuffle : ";
    PrintArray(arr, arrLength);

     
    ShuffleArray(arr, arrLength);
    cout << "Array element after shuffle  : ";
    PrintArray(arr, arrLength);

    return 0;
}
