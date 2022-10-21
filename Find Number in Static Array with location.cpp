#include<iostream>
using namespace std;
int main()
{
	const int size = 1000;
	int array[size];
	int students = 0, check = 0;

	cout << "Enter how many students you have = ";
	cin >> students;

	for (int count = 0; count < students; count++)
	{
		cout << "Enter the roll number of student #" << count + 1 << " = ";
		cin >> array[count];
	}

	cout << endl;

	cout << "Students [" << students << "] : ";

	for (int count = 0; count < students - 1; count++)
	{
		cout << array[count] << " | ";
	}

	cout << array[students - 1] << endl << endl;

	cout << "Enter the roll number to check whether its in the array or not = ";
	cin >> check;

	int count = 0;
	for (count; count < students; count++)
	{
		if (check == array[count])
		{
			break;
		}
	}
	if (count < students)
	{
		cout << "Roll number " << check << " found at index #" << count + 1<< endl;
	}
	else
	{
		cout << "Roll number " << check << " not found" << endl;
	}

	system("PAUSE");
	return 0;
}
