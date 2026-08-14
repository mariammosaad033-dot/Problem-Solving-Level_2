#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;  
    cout << "\nPlease enter a number? ";
    cin >> Number;  
    return Number;
}

void AddArrayElement(int arr[100],int &arrLength,int number)
{
    arrLength++;
    arr[arrLength - 1] = number;
}
void InputUserNumbersInArray(int arr[100], int &arrLength)
{
    bool AddMore = true;
    do
    {
        AddArrayElement(arr, arrLength, ReadNumber());

        cout << "Do you want to add more numbers? [0]:No,[1]:yes" << endl;
        cin >> AddMore;

    } while (AddMore);
}
void printarray(int arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[100], arrLength=0;
    
    InputUserNumbersInArray(arr, arrLength);

    cout << "\nArray Length: " << arrLength << endl;
    cout << "Array elements: ";
    printarray(arr, arrLength);

    return 0;

}
