#include<iostream>
using namespace std;
int main()
{
	int member = 0, ticketp = 0, popcornp = 0;
	
	char ticket, popcorn;

	cout << "------------ Welcome to Emporium Mall ------------" << endl << endl;

	cout << "Enter how many people are with you = ";
	cin >> member;
	cout << endl;


	cout << "------------ Welcome to Universal Cinemas ------------" << endl << endl;

	for (int count = 1; count <= member + 1; count++)
	{
		cout << "Select your movie tickets from this menu :-" << endl;
		cout << "Enter S to select student movie ticket for 250 \nEnter N to select normal movie ticket for 400 \nEnter E to select enterprise movie ticket for 750 " << endl;
		cout << "Enter your choice = ";
		cin >> ticket;

		cout << endl;

		if (ticket == 'S')
		{
			ticketp += 250;
		}

		else if (ticket == 'N')
		{
			ticketp += 400;
		}

		else if (ticket == 'E')
		{
			ticketp += 750;
		}
		
		else
		{

			cout << "INVALID CHOICE" << endl << endl;
			
		}
	}

	cout << "------------ Welcome to Popcorn Stall ------------" << endl << endl;

	for (int count = 1; count <= member + 1; count++)
	{
		cout << "Select your Popcorn flavor from this menu :-" << endl;
		cout << "Enter S to select simple popcorn for 100 \nEnter T to select tacos popcorn for 150 \nEnter C to select caramel popcorn for 200 " << endl;
		cout << "Enter your choice = ";
		cin >> popcorn;

		cout << endl;

		if (popcorn == 'S')
		{
			popcornp += 100;
		}

		else if (popcorn == 'T')
		{
			popcornp += 150;
		}

		else if (popcorn == 'C')
		{
			popcornp += 250;
		}

		else
		{
			while (ticket != 'S' || ticket != 'N' || ticket != 'E')
			{
				cout << "INVALID INPUT" << endl << endl;


			}
		}
	}

	cout << "Movie Tickets cost you " << ticketp << endl;

	cout << "Popcorns cost you " << popcornp << endl;

	cout << "Total cost is " << ticketp + popcornp << endl;

	system("PAUSE");
	return 0;
}