#include <iostream>
#include <cmath>
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

int MyCeil(float number)
{
    float FractionPart = GetFractionPart(number);

    if (abs(FractionPart) > 0)
    {
        if (number > 0)
            return int(number) + 1;
        else
            return  int(number);
    }
    else
        return int(number);


}
int main()
{
    float Number = ReadNumber();
    cout << "My Ceil Function : " << MyCeil(Number) << endl;
    cout << "C++ ceil Function : " << ceil(Number) << endl;
    return 0;
}
