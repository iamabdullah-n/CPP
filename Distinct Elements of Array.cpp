#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int array[size] = { 0 }, distinct[size] = { 0 };
	bool isDistinct = true;
	int counter = 0;

	for (int count = 0; count < size; count++)
	{
		/*cout << "Enter the value of index " << count << " : ";
		cin >> array[count];*/
		array[count] = rand() % 10;
	}

	cout << "Array : \t ";
	for (int count = 0; count < size; count++)
	{
		cout << array[count] << '\t';
	}
	cout << endl << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j)
			{
				break;
			}
			if (array[i] == array[j])
			{
				isDistinct = false;
			}
		}

		if (isDistinct == true)
		{
			distinct[counter] = array[i];
			counter++;
		}

		isDistinct = true;
	}

	cout << "Distinct Elements : \t";
	for (int count = 0; count < counter; count++)
	{
		cout << distinct[count] << '\t';
	}
	cout << endl;

	return 0;
}