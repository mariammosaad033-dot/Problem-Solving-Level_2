#include <iostream>
#include <cmath>
using namespace std;
int ReadNumber()
{
    int number;
    cout << "Please enter the number \n";
    cin >> number;
    return number;
}

int  MyAbsolute(int number)
{
    if (number < 0)
    {
        return  number * -1;
    }
    else
    {
        return number;
    }
}

int main()
{
    int number = ReadNumber();
    cout << "My absolute function : " << MyAbsolute( number)<<endl;
    cout << "C++ Function  : " << abs(number) << endl;
    return 0;
}
