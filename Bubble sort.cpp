#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int array[size] = { 0 };
	int temp = 0;

	for (int count = 0; count < size; count++)
	{
		array[count] = rand() % 100;
	}

	cout << "Array : \t ";
	for (int count = 0; count < size; count++)
	{
		cout << array[count] << '\t';
	}
	cout << endl;

	for (int count = 0; count < size - 1; count++)
	{
		for (int count2 = 0; count2 < size - (count + 1); count2++)
		{
			if (array[count2] > array[count2 + 1])
			{
				temp = array[count2];
				array[count2] = array[count2 + 1];
				array[count2 + 1] = temp;
			}
		}
	}

	cout << "Sorted Array : \t ";
	for (int count = 0; count < size; count++)
	{
		cout << array[count] << '\t';
	}
	cout << endl;

	system("PAUSE");
	return 0;
}