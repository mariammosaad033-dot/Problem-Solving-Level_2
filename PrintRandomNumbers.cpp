#include<iostream>
#include<cstdlib>
using namespace std;
int RandomNumber(int From, int To)
{
	int number = rand() % (To - From + 1) + From;
	return number;
}
int main()
{
	srand((unsigned)time(NULL));

	cout << RandomNumber(20, 30) << endl;
	cout << RandomNumber(20, 30) << endl;
	cout << RandomNumber(20, 30) << endl;
	return 0;
}
