#include <iostream>
#include<string>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int number;
    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
void PrintInvertedNumberPattern(int number)
{
    for (int i = number ;i >= 1;i--)
    {
        for (int j = 1;j <=i;j++)
        {
            cout << i;
        }
        cout << endl;
    }   
}
int main()
{
    int number = ReadPositiveNumber("Please enter a positive number");
    PrintInvertedNumberPattern(number);
    return 0;
}
