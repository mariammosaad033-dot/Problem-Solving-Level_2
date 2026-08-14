#include <iostream>
#include<cstdlib>
using namespace std;

enum enPrimeNotPrime { prime = 1, notprime = 2 };

enPrimeNotPrime ChecktPrime(int number)
{
    int M = round(number / 2);

    for (int counter = 2;counter <= M;counter++)
    {
    	if (number % counter == 0)
    		return enPrimeNotPrime::notprime;  
    }	
	return enPrimeNotPrime::prime;
}

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "Please enter the number of element " << endl;
	cin >> arrLength;

	for (int i = 0;i < arrLength;i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}


void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0;i < arrLength;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}




void CopyOnlyPrimaryNumbers(int SourceArr[100], int DestinationArr[100], int arrLength, int& arr2Length)
{
	int counter = 0;

	for (int i = 0;i < arrLength;i++)
	{

		if (ChecktPrime(SourceArr[i]) == enPrimeNotPrime::prime)
		{
			DestinationArr[counter] = SourceArr[i];
			counter++;
		}
	}
	arr2Length = --counter;
}


int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arrLength;
	int arr2[100], arr2Length=0;

	FillArrayWithRandomNumbers(arr1, arrLength);
	cout << "\nArray 1 element : ";
	PrintArray(arr1, arrLength);

	CopyOnlyPrimaryNumbers(arr1, arr2, arrLength, arr2Length);
	cout << "\nPrime Numbers in Array2 : ";
	PrintArray(arr2, arr2Length);

	return 0;
}
