#include<iostream>
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
int CountDigitFrequency(int number, int DigitToCheck)
{
	short Freq = 0;
	int Remainder = 0;
	while (number > 0)
	{
		Remainder = number % 10;
		number = number / 10;
		if (Remainder == DigitToCheck)
		{
			Freq++;
		}
	}
	return Freq;
}
void PrintAllDigitsFrequency(int number)
{
	
	for(int Counter=0;Counter<=9;Counter++)
	{
		short DigitFrequency = 0;
		DigitFrequency = CountDigitFrequency(number, Counter);
		if (DigitFrequency > 0)
		{
			cout << "Digit " << Counter << " Frequency is " << DigitFrequency << " Times" << endl;
		}
	}
}
int main()
{
	int number = ReadPositiveNumber("Please enter a positive number");
	PrintAllDigitsFrequency(number);
	return 0;
}
