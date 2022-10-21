#include<iostream>
using namespace std;
int main()
{
	const int size = 200, size2 = 50;
	char sent[size], word[size2];
	bool isFound = false;

	cout << "Enter a sentence : ";
	cin.getline(sent, size);

	cout << "Enter a word to find in the sentence : ";
	cin.getline(word, size2);

	int i = 0, j = 0;

	for (i = 0; sent[i] != '\0'; i++)
	{
		j = 0;
		
		if (sent[i] == word[j])
		{
			while(sent[i] == word[j])
			{
				i++;
				j++;
			}

			if (word[j] == '\0')
			{
				cout << word << " found in the sentence \n";
				isFound = true;
				break;
			}
		}
		if (isFound == true)
		{
			break;
		}
	}

	if (isFound == false)
	{
		cout << word << " is not present in the sentence \n";
	}

	return 0;
}