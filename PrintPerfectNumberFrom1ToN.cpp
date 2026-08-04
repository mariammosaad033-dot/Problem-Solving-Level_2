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
bool IsPerfectNUmber(int number)
{
    int sum = 0;
    for (int i =1;i < number;i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    } return sum == number;
}
void PrintPerfectNumberFrom1ToN(int number)
{
    cout << "Perfect number between 1 and " << number <<" are " << endl;
    for(int i =1;i<=number;i++)
        if (IsPerfectNUmber(i) == true)
        {
            cout << i << endl;
        }
}
int main()
{
    PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Please enter a positive number "));
    return 0;
}
