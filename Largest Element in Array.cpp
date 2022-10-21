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

	cout << "Array[" << size << "] : \t";
	for (int count = 0; count < size; count++)
	{
		cout << array[count] << '\t';
	}
	cout << endl;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - (i + 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
	}

	cout << array[size - 1] << " is the largest element in the array " << endl;

	return 0;
}