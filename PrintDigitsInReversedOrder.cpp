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
void PrintDigits(int number)
{
    int Remainder = 0;
    while (number > 0)
    {
        Remainder = number % 10;
        number = number / 10;
        cout << Remainder<<endl ;
    }
}
int main()
{
    PrintDigits(ReadPositiveNumber("Please enter a number : "));
    return 0;
}
