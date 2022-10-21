#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int array[size] = { 0 };
	int low = 0, mid = 0, high = 0, key = 0, temp = 0;
	bool isFound = false;

	for (int count = 0; count < size; count++)
	{
		array[count] = rand() % 100;
	}

	cout << "Array[" << size << "] : \t ";
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
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	cout << "AFTER SORTING \n";
	cout << "Array[" << size << "] : \t ";
	for (int count = 0; count < size; count++)
	{
		cout << array[count] << '\t';
	}
	cout << endl;
	
	low = 0;
	high = size - 1;

	cout << "Enter any number to search : ";
	cin >> key;

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (array[mid] == key)
		{
			cout << "Number found at " << mid << endl;
			isFound = true;
			break;
		}

		else if (array[mid] < key)
		{
			low = mid + 1;
		}

		else
		{
			high = mid - 1;
		}
	}

	if (isFound == false)
	{
		cout << "Number not found in the array \n";
	}
	
	return 0;
}