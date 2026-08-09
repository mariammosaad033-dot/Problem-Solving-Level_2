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
    } while (number <=0);
    return number ;
}
void PrintInvertedLetterPattern(int number)
{
    for (int i = number + 65 - 1;i >= 65;i--)
    {
        for (int j = 65;j <= i;j++)
        {
            cout << char(i);
        }
        cout << endl;
    }
}
int main()
{
    int number = ReadPositiveNumber("Please enter a positive number");
    PrintInvertedLetterPattern(number);
    return 0;
}
