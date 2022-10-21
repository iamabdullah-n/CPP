#include<iostream>
using namespace std;
int main()
{
	const int size = 100, size2 = 20;
	char sent[size], word[size2];
	bool isFound = true;

	cout << "Enter a sentence : ";						cin.getline(sent, size);

	cout << "Enter a word : ";							cin.getline(word, size2);

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
				cout << endl << word << " is found in the sentence " << endl;
				isFound = true;
				break;
			}
			else
			{
				isFound = false;
			}
		}
	}

	if (isFound == false)
	{
		cout << endl << word << " is not found in the sentence " << endl;
	}

	return 0;
}