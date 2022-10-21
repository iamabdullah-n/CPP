#include<iostream>
using namespace std;

int main() {
	int num = 0, counter = 0;

	cout << "Enter a number to check whether it's prime or not = ";
	cin >> num;

	for(int count = 2; count <= num/2; count++)
	{
		if(num % count == 0)
		{
			counter++;
		}
	}
	
	if(counter == 0)
	{
		cout << "The Number is Prime \n\n";
	}
	else
	{
		cout << "The Number is not Prime \n\n";
	}

	return 0;
}