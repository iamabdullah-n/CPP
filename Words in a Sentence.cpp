#include<iostream>
using namespace std;
int main()
{
	const int size = 200;
	char sent[size];
	int counter = 0;

	cout << "Enter a sentence : ";
	cin.getline(sent, size);

	for (int count = 0; sent[count] != '\0'; count++)
	{
		if (sent[count] == 32)
		{
			counter++;
		}
	}

	cout << "There are total " << counter + 1 << " words in the sentence \n";

	return 0;
}