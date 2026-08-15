#include <iostream>
#include<cmath>
using namespace std;
float ReadNumber()
{
    float number;
    cout << "Please enter the number\n";
    cin >> number;
    return number;
}
float  MySqrt(int number)
{
    return pow(number, .5);
}
int main()
{
    float Number = ReadNumber();
    cout << "My MySqrt Result is " << MySqrt(Number) << endl;
    cout << "C++ sqrt Result is  " << sqrt(Number) << endl;
    return 0;
}
