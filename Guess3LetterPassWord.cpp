#include <iostream>
#include<string>
using namespace std;

string ReadPassword()
{
	string PassWord ;
	cout << "Please enter a 3-Letter Password (all capital) "<<endl;
	cin >> PassWord;
	return PassWord;
}
void GuessPassWord(string PassWordToCheck)
{
	int trial = 0;
	for (int i = 65;i <= 90;i++)
	{
		for (int j = 65;j <= 90;j++)
		{
			for (int k = 65;k <= 90;k++)
			{
				string word = "";
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);

        trial++;

        cout << "Trail [" << trial << "] : " << word<<endl;

				if (PassWordToCheck == word)
				{
					cout << "\nPassWord is " << word << endl;
					cout << "Found after [" << trial << "] Trails" << endl;
					return;
				}	
			}
		}
	}
}
int main()
{
	GuessPassWord(ReadPassword());
	return 0;
}

