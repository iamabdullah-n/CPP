#include <iostream>
using namespace std;
int main()
{
	int n, factorial = 1;
	cout << " Enter any to number to find its factorial = ";
	cin >> n;
	if (n < 0)
	{
		cout << " Factorial of negative number does not exist " << endl;
	}
	else if (n <= 1)
	{
		cout << " Factorial of a given number = " << factorial << endl;
	}
	else
	{
		for (int count = 1; count <= n ; count++)
		{
			factorial = factorial * count;
		}
		cout << " Fictorial of " << n << " is " << factorial << endl;
	}
	system("PAUSE");
	return 0;
}