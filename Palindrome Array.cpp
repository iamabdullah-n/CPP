#include<iostream>
using namespace std;
int main()
{
	const int size = 10000;
	int array[size] = { 0 }, rev[size] = { 0 };
	int number, counter = 1, counter2 = 0;

	cout << "Enter how many index of an array you want = ";
	cin >> number;

	for (int count = 0; count < number; count++)
	{
		cout << "Enter the value of index #" << count << " = ";
		cin >> array[count];
	}

	cout << "Array [" << number << "]          : ";
	for (int count = 0; count < number - 1; count++)
	{
		cout << array[count] << " | ";
	}
	cout << array[number - 1] << endl;

	for (int count = 0; count < number; count++)
	{
		rev[count] = array[number - counter];
		counter++;
	}

	cout << "Reverese Array [" << number << "] : ";
	for (int count = 0; count < number - 1; count++)
	{
		cout << rev[count] << " | ";
	}
	cout << rev[number - 1] << endl;

	for (int count = 0; count < number ; count++)
	{
		if (array[count] == rev[count])
		{
			counter2++;
		}
	}

	if (counter2 == number)
	{
		cout << "Array is palimdromic" << endl;
	}
	else
	{
		cout << "Array is not palindromic" << endl;
	}

	system("PAUSE");
	return 0;
}