#include<iostream>
using namespace std;
int main()
{
	bool isPrime = true;

	for (int count = 2; count < 500; count++)
	{
		for (int count2 = 2; count2 < (count / 2); count2++)
		{
			if (count % count2 == 0)
			{
				isPrime = false;
			}
		}

		if (isPrime == true)
		{
			cout << count << '\t';
		}
		isPrime = true;
	}

	cout << endl;

	system("PAUSE");
	return 0;
}