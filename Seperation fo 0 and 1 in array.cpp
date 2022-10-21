#include <iostream>
using namespace std;
int main()
{
	const int size = 10;
	int array[size] = { 0 };
	int temp = 0;
	
	for (int count = 0; count < size; count++)
	{
		array[count] = rand() % 2;
	}

	cout << "Array[" << size << "] : \t";
	for (int count = 0; count < size; count++)
	{
		cout << array[count] << '\t';
	}
	cout << endl << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - (i + 1); j++)
		{
			if (array[j] == 1)
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}		
	}

	cout << "AFTER SORTING \n\n";
	cout << "Array[" << size << "] : \t";
	for (int count = 0; count < size; count++)
	{
		cout << array[count] << '\t';
	}
	cout << endl << endl;

	return 0;
}