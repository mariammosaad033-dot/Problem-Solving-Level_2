#include <iostream>
#include <string>
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
bool IsPerfectNumber(int number)
{
    int sum = 0;
    for (int counter = 1;counter < number;counter++)
    {
        if (number % counter == 0)
        {
            sum += counter;
        }
     
    } 
    return sum == number;
}
void  PrintResult(int number)
{
    if (IsPerfectNumber(number)==true)
        cout << number << " is a Perfect Number "<<endl;
    else
        cout << number << " is Not a Perfect Number " << endl;
}
int main()
{
    PrintResult(ReadPositiveNumber("Please enter a positive number"));
    return 0;
}
