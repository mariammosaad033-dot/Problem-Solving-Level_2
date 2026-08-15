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
int MyFloor(float number)
{
    if (number > 0)
          return int(number);
    else
        return int(number)-1;
}

int main()
{
    float Number = ReadNumber();
    cout << "My Floor Function : " << MyFloor(Number)<<endl;
    cout << "C++ Floor Function : " << floor(Number)<<endl;
    return 0;
}
