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

int  CountDigitFrequency(int number,int DigitToCheck)
{ 
    int FreqCount = 0;
    int Remainder = 0;
    while (number > 0)
    {
        Remainder = number % 10;
        number = number / 10;
        if (Remainder== DigitToCheck)
        {
            FreqCount++;
        }
    }
    return FreqCount; 
}
int main()
{
    int number = ReadPositiveNumber("Please enter a positive number  ");
    short DigitToCheck= ReadPositiveNumber("Please enter a digit to check ");
    cout <<"Digit "<<DigitToCheck<<" Frequency is "
         << CountDigitFrequency(number, DigitToCheck)<<" Times "<<endl;
    return 0;
}
