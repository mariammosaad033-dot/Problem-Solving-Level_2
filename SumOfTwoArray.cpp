#include <iostream>
#include <cstdlib>
using namespace std;
int RandomNumber(int From ,int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
int ReadArrLength()
{
    int arrLength;
    cout << "Enter number of element " << endl;
    cin >> arrLength;
    return arrLength;
}
void FillArrayWithRandomNumbers(int arr[100],int &arrLength)
{
    for (int i = 0;i < arrLength;i++)
    {
        arr[i] = RandomNumber(1,100);
    }
}
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
}
void SumOfTwoArray(int arr1[100], int arr2[100],int arrOfSum[100], int arrLength)
{
    
    for (int i = 0;i < arrLength;i++)
    {
       arrOfSum[i] = arr1[i] + arr2[i] ;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100],arrOfSum[100];
    int  arrLength = ReadArrLength();

    FillArrayWithRandomNumbers(arr1, arrLength);
    cout << "Array 1 element : ";
    PrintArray(arr1, arrLength);


    FillArrayWithRandomNumbers(arr2, arrLength);
    cout << "Array 2 element : ";
    PrintArray(arr2, arrLength);


    SumOfTwoArray(arr1, arr2, arrOfSum,arrLength);
    cout << "\nSum of array1 and array2 elements : ";
    PrintArray(arrOfSum, arrLength);

    return 0;


}
