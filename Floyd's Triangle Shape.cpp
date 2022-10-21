#include<iostream>
using namespace std;
int main()
{
	int num = 1;

	for (int row = 1; row <= 5; row++)
	{
		for (int col = 1; col <= row; col++)
		{
			cout << num << '\t';
			num++;
		}
		cout << endl;
	}

	system("PAUSE");
	return 0;
}