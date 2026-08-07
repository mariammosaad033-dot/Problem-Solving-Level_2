#include <iostream>
#include <string>
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
int PrintSum(int number)
{
    int Remainder = 0, Sum = 0;

    while (number > 0)
    {
        Remainder = number % 10;
        Sum += Remainder;
        number = number / 10;
    
    }    return  Sum ;
}
int main()
{
  cout<<"Sum of digits = "<<  PrintSum(ReadPositiveNumber("Please enter a positive number "))<<endl;
  return 0;
}
