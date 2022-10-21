#include<iostream>
using namespace std;
int main()
{
	const int size = 20, size2 = 50;
	char first[size], last[size], full[size2];
	int counter = 0;

	cout << "Enter your first name : ";				cin >> first;

	cout << "Enter your last name : ";				cin >> last;
	
	for (int count = 0; first[count] != '\0'; count++)
	{
		full[count] = first[count];
		counter++;
	}

	full[counter] = 32;
	counter++;

	for (int count = 0; last[count] != '\0'; count++)
	{
		full[counter] = last[count];
		counter++;
	}

	for (int count = 0; count < counter; count++)
	{
		cout << full[count];
	}
	cout << endl;

	system("PAUSE");
	return 0;
}