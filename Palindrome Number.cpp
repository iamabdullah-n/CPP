/* A palindromic number (also known as a numeral palindrome or a numeric
palindrome) is a number that remains the same when its digits are
reversed. Your task is to get a 5-digit number as input from the user and
check whether it is a PALINDROME or not? */


#include <iostream>
using namespace std;
int main()
{
	int n, num, digit, rev=0;
	cout << " Enter a positive number : ";
	cin >> num;       

	n = num;
	while (num != 0)  
	{
		digit = num % 10;   
		rev = (rev * 10) + digit; 
		num = num / 10;
	}
	if (n == rev)
	{
		cout << n << " is Palindrome Number " << endl;
	}
	else
	{
		cout << n << " is not Palindrone Number " << endl;
	}
	return 0;
}