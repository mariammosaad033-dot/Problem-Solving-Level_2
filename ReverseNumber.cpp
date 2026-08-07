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
int PrintReverseNumber(int number)
{
    int Remainder = 0  ,  Number_2=0;

    while (number > 0)
    {
        Remainder = number % 10;
        number = number / 10;
        Number_2 = Number_2 * 10 + Remainder;
    }
    return Number_2;
}
int main()
{
   cout<<"Reverse Number = "
       << PrintReverseNumber(ReadPositiveNumber("Please enter a positive number "));
   return 0;
}
 
