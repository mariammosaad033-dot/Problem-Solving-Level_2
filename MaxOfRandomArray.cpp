#include <iostream>
#include <cstdlib>
using namespace std;
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "Please enter the number of element " << endl;
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
        cout << arr[i] << " ";
    }
    cout << endl;
}

int MaxNumberInArray(int arr[100], int arrLength)
{
    int max = 0;
    for (int i = 0;i < arrLength;i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    FillArrayWithRandomNumbers(arr, arrLength); 
    cout << "Array Element : ";
    PrintArray(arr, arrLength);

    cout << "\nMax number is ";
    cout << MaxNumberInArray(arr, arrLength) << endl;

    return 0;
}
