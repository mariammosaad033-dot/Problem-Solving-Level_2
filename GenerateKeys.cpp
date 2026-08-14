#include <iostream>
#include<cstdlib>
using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int ReadNumberOfKeys()
{
    int number;
    cout << "Please enter a number Of keys " << endl;
    cin >> number;
    return number;
}

int RandomNumber(int From, int To)
{
    int randnum = rand() % (To - From + 1) + From;
    return randnum;
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

string GetWord(enCharType chartype)
{
    string word;
    for (int i = 1;i <= 4;i++)
    {
        word = word + GetRandomCharacter(chartype);
    }
    return word;
}
string GetKey()
{
    string key = "";

    key = GetWord(enCharType::CapitalLetter) + "-";
    key = key + GetWord(enCharType::CapitalLetter) + "-";
    key = key + GetWord(enCharType::CapitalLetter) + "-";
    key = key + GetWord(enCharType::CapitalLetter);

    return key;
}
void GetKeys(int number)
{
    for (int i = 1;i <= number;i++)
    {
        cout << "Key [" << i << "] : ";
        cout << GetKey() << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));

    GetKeys(ReadNumberOfKeys());

    return 0;
}
