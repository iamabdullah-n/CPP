#include<iostream>
using namespace std;
int main()
{
	const int size = 15, size2 = 20;
	char array[size] = { '\0' }, array2[size2] = { '\0' };
	bool isSame = false;

	cout << "Enter the name of first name : ";
	cin >> array;

	cout << "Enter the name of second name : ";
	cin >> array2;

	for (int count = 0; array[count] != '\0' || array2[count] != '\0'; count++)
	{
		if (array[count] == array2[count])
		{
			isSame = true;
		}
		else
		{
			break;
		}
	}

	if (isSame == true)
	{
		cout << "Both names are same \n";
	}
	else
	{
		cout << "Both names are different \n";
	}

	return 0;
}