#include <iostream>
using namespace std;
int main()
{
	int num, total = 0;
	cout << "Enter any number : ";
	cin >> num;
	for (int count = 2; count < num; count++)
	{
		if (num % count == 0)
		{
			cout << "A positive divisor of " << num << " is " << count << endl;
			total = total + 1;
		}
	}
	cout << "Total positive divisors are " << total << endl << endl;
	system("PAUSE");
	return 0;
}