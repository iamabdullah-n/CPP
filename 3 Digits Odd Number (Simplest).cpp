#include<iostream>
using namespace std;

int main()
{

	for (int count = 100, counter = 0; count < 1000; count++, counter = 0)
	{
		
		for(int num = count, rem = 0; num!= 0; num = num / 10)
		{
			rem = num % 10;

			if (rem % 2 != 0)	counter++;
		}

		if (counter == 3)	cout << count << "\t\t";
	}

	return 0;
}