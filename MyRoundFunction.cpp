#include <iostream>
#include<cmath>
using namespace std;
float ReadNumber()
{
    float number;
    cout << "Please enter the number \n";
    cin >> number;
    return number;
}

float GetFractionPart(float number)
{
    return number - int(number);
}

int MyRound(float number)
{
    int IntPart;
    IntPart = int(number);
    float FractionPart = GetFractionPart(number);
    if (abs(FractionPart) >= .5)
    {
        if (number > 0)
            return ++IntPart;
        else
            return --IntPart;
    }
    else
    {
        return IntPart;
    }

}
int main()
{
    float Number = ReadNumber();
    cout << "My Round Result : " << MyRound(Number) << endl;
    cout << "C++ Round Result : " << round(Number) << endl;
    return 0;
}

