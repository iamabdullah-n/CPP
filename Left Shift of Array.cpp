#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int array[size] = { 0 };
	int limit = 0;

	for (int count = 0; count < size; count++)
	{
		array[count] = rand() % 100;
	}

	cout << "Array : \t\t ";
	for (int count = 0; count < size; count++)
	{
		cout << array[count] << '\t';
	}
	cout << endl << endl;

	cout << "Enter how many time you want to left shift the array : ";
	cin >> limit;

	for (int count = 1; count <= limit; count++)
	{
		for (int i = 0; i < size - 1; i++)
		{
			array[i] = array[i + 1];
		}
		array[size - 1] = 0;
	}
	
	cout << "Shifted Array : \t ";
	for (int count = 0; count < size; count++)
	{
		cout << array[count] << '\t';
	}
	cout << endl;

	system("PAUSE");
	return 0;
}