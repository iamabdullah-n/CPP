#include<iostream>
using namespace std;
int main()
{
	const int size = 5;
	int array[size] = { 0 };
	int temp = 0, low = 0, mid = 0, high = 0, key = 0;
	bool isFound = false;

	for (int count = 0; count < size; count++)
	{
		cout << "Enter the value : ";
		cin >> array[count];
	}

	cout << "Array : \t";
	for (int count = 0; count < size; count++)
	{
		cout << array[count] << '\t';
	}
	cout << endl;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	cout << "AFTER SORTING " << endl;
	cout << "Array : \t";
	for (int count = 0; count < size; count++)
	{
		cout << array[count] << '\t';
	}
	cout << endl;

	cout << "Enter the number to find in the array : ";
	cin >> key;

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (high + low) / 2;

		if (array[mid] == key)
		{
			cout << "Number found at " << mid << endl;
			isFound = true;
			break;
		}
		else if (key < mid)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}

	if (isFound == false)
	{
		cout << "Number not found" << endl;
	}

	return 0;
}