#include <iostream>
#include<cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

void FillArrayWithRandomNmbers(int arr[100], int& arrLength)
{
    cout << "Please enter number of element " << endl;
    cin >> arrLength;

    for (int i = 0;i < arrLength;i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}
void PrintArray(int arr[100], int& arrLength)
{
    for (int i = 0;i < arrLength;i++)
    {
      cout<<  arr[i]<<" ";
    }
    cout << endl;
}

void CopyArrayInReverseOrder(int SourceArr[100],int DestinationArr[100], int arrLength)
{

    for (int i = 0;i < arrLength;i++)
    {
        DestinationArr[i] = SourceArr[arrLength - 1 -i]; 
    }
}
int main()
{
    srand((unsigned)time(NULL));

    int arr1[100] ,arr2[100] ,arrLength;

    FillArrayWithRandomNmbers(arr1, arrLength);
    cout << "Array Elements : ";
    PrintArray(arr1, arrLength);


    CopyArrayInReverseOrder(arr1, arr2, arrLength);
    cout << "Array after Reverse : ";
    PrintArray(arr2, arrLength);

    return 0;

}
