#include <iostream>
using namespace std;
int main()
{
	int num, rem = 0, sum = 0, bin = 1;
	cout << "Enter any number to convert it into binary number : ";
	cin  >> num;
	while (num != 0)
	{
		rem = num % 2;
		sum = sum + (rem * bin);
		bin = bin * 10;
		num = num / 2;
	}
	cout << "The binary equivalent of given decimal number is " << sum << endl;
	system("PAUSE");
	return 0;
}