#include <iostream>
#include<cstdlib>
using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}

char GetRandomCharacter(enCharType chartype)
{
    switch (chartype)
    {
    case enCharType::CapitalLetter:
        return char(RandomNumber(65, 90));
        break;
    case enCharType::SmallLetter:
        return char(RandomNumber(97, 122));
        break;
    case enCharType::Digit:
        return char(RandomNumber(48, 57));
        break;
    case enCharType::SpecialCharacter:
        return char(RandomNumber(33, 47));
        break;
    }
}

int main()
{
    srand((unsigned)time(NULL));
  
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
    cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
    cout << GetRandomCharacter(enCharType::Digit) << endl;
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
  
    return 0;
}
