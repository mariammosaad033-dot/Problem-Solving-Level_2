#include <iostream>
#include<string>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int  ReverseNumber(int Number)
{
    int Remainder = 0, Number2 = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Remainder;
    }
    return Number2;
}

bool IsPalindromeNumber(int number)
{
    return (ReverseNumber(number) == number);
}

void PrintResult(int number)
{
    if (IsPalindromeNumber(number))
        cout << "The number is Palindrome Number ";
    else
        cout << "The number is Not Palindrome Number";
}
int main()
{
    int number = ReadPositiveNumber("Please enter a positive number");
    PrintResult(number);
    return 0;
}
