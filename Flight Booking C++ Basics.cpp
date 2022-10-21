#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int size = 100, size2 = 101;
	string name[size], destination[size];
	int age[size], passport[size], ticket[size], seatnum[size];
	char seat[size] = { 'NULL' };
	int choice2;
	int counter = 0;
	char choice, confirmation;

	for (int count = 0; count < size; count++)
	{
		ticket[count] = rand();
	}

	for (int count = 0; count < size; count++)
	{
		seatnum[count] = rand() % 287;
	}

	for (int count = 0; count < size2 - 1; count++)
	{
		seat[size] = (rand() % 26) + 65;
	}

	/*for (int count = 0; count < size2 - 1; count++)
	{
		cout << seat[size] << endl;
	}*/

	do
	{

		cout << "|---------------------------------------------------------------------------------------------------------|" << endl;
		cout << "|                                                                                                         |" << endl;
		cout << "|                                        Q A T A R  A I R W A Y S                                         |" << endl;
		cout << "|                                                                                                         |" << endl;
		cout << "|---------------------------------------------------------------------------------------------------------|" << endl << endl;

		cout << "Welcome to Qatar Airways" << endl << endl;

		cout << "The available tickets are :-" << endl;
		cout << "1. Islamabad International Airport at 6:00 pm " << endl;
		cout << "2. Dubai International Airport at 2:20 am" << endl;
		cout << "3. Los Angeles International Airport at 12:05 pm" << endl;
		cout << "4. John F. Kennedy Airport at 3:45 pm " << endl;
		cout << "5. Jinnah International Airport at 9:00 am" << endl << endl;

		cout << "Which ticket you want to buy : ";
		cin >> choice2;

		system("cls");

		if (choice2 < 1 || choice2 > 5)
		{
			do
			{
				cout << "|---------------------------------------------------------------------------------------------------------|" << endl;
				cout << "|                                                                                                         |" << endl;
				cout << "|                                        Q A T A R  A I R W A Y S                                         |" << endl;
				cout << "|                                                                                                         |" << endl;
				cout << "|---------------------------------------------------------------------------------------------------------|" << endl << endl;

				cout << "Welcome to Qatar Airways" << endl << endl;

				cout << "INVALID INOUT " << endl;
				cout << "INPUT AGAIN " << endl << endl;
				cout << "The available tickets are :-" << endl;
				cout << "1. Islamabad International Airport at 6:00 pm " << endl;
				cout << "2. Dubai International Airport at 2:20 am" << endl;
				cout << "3. Los Angeles International Airport at 12:05 pm" << endl;
				cout << "4. John F. Kennedy Airport at 3:45 pm " << endl;
				cout << "5. Jinnah International Airport at 9:00 am" << endl << endl;

				cout << "Which ticket you want to buy : ";
				cin >> choice2;

				system("cls");
			} while (choice2 < 1 || choice2 > 5);
		}

		switch (choice2)
		{
		case 1:
			destination[counter] = "Islamabad International Airport at 6:00 pm";
			break;
		case 2:
			destination[counter] = "Dubai International Airport at 2:20 am";
			break;
		case 3:
			destination[counter] = "Los Ageles International Airport at 12:05 pm";
			break;
		case 4:
			destination[counter] = "John F. Kennedy Airport NewYork at 3:45 pm";
			break;
		case 5:
			destination[counter] = "Jinnah International Airport Karachi at 9:00 am";
			break;
		}

			cout << "|---------------------------------------------------------------------------------------------------------|" << endl;
			cout << "|                                             QATAR AIRWAYS                                               |" << endl;
			cout << "|---------------------------------------------------------------------------------------------------------|" << endl << endl;

			cin.ignore();
			cout << "Enter your good name Sir : ";
			getline(cin, name[counter]);
			cout << endl;

			cout << "Enter your age : ";
			cin >> age[counter];

			cout << endl;

			cout << "Enter your passport number : ";
			cin >> passport[counter];

			system("cls");

			cout << "----------------------------------------------------------------------------------------------------------------------" << endl << endl;
			cout << "   Name          :\t" << name[counter] << "                                                                      " << endl;
			cout << "   Age           :\t" << age[counter] << "                                                                       " << endl;
			cout << "   Passport      :\t" << passport[counter] << "                                                                  " << endl;
			cout << "   Ticket Number :\t" << ticket[counter] << "                                                                    " << endl;
			cout << "   Seat Number   :\t" << seatnum[counter] << seat[counter] << "                                                  " << endl;
			cout << "   Flight        :\t" << destination[counter] << "                                                               " << endl << endl;
			cout << "----------------------------------------------------------------------------------------------------------------------" << endl << endl;

			cout << "Ticket confirmation : " << endl;
			cout << "Enter Y to confirm this ticket " << endl;
			cout << "Enter N to cancel this ticket " << endl;
			cin >> confirmation;

			cout << "\n\n\n";

			if (confirmation == 'Y' || confirmation == 'y')
			{
				cout << "Your Ticket has been confirmed" << endl;
				cout << "Have a safe flight, ALLAH HAFIZ" << endl;
				counter++;
			}

			else if (confirmation == 'N' || confirmation == 'n')
			{
				name[counter] = "NULL";
				age[counter] = 0;
				passport[counter] = 0;
				ticket[counter] = 0;

				cout << "Your ticktet has been canceled" << endl;
				cout << "Have a good day, ALLAH HAFIZ" << endl;
			}

			cout << "\n\n\n";

			cout << "Do you want to book another ticket." << endl;
			cout << "Press Y to book another ticket" << endl;
			cout << "Press N to exit " << endl;
			cin >> choice;

			system("cls");

	} while (choice == 'Y' || choice == 'y');
	
	system("PAUSE");
	return 0;
}