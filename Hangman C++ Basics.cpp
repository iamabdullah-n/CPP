#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;

	int counte = 0, age = 0, choice = 0, choice2 = 0;

	char choice3 = '\0';

	int counter = 0, counter2 = 0, counter3 = 0, attempt = 5, check = 0, check1 = 0, check2 = 0, check3 = 0, check4 = 0;
	char character = '\0';


	cout << "=====================================================================================================================" << endl;
	cout << "                                            Welcome to the Hangman Game                                              " << endl;
	cout << "=====================================================================================================================" << endl << endl;

	cout << "Please Enter your Name : ";
	getline(cin, name);

	cout << "Enter your age : ";
	cin >> age;
	cout << endl;

	cout << "Now, " << name << " Let's start the game! " << endl << endl;

	cout << "Press '1' to continue ";
	cin >> choice;

	do
	{

		system("cls");

		cout << "Choose one from the following category." << endl;
		cout << "1. Names" << endl;
		cout << "2. Cities" << endl;
		cout << "3. Movies" << endl << endl;

		cout << "Enter your choice : ";
		cin >> choice2;

			system("cls");

			switch (choice2)
			{
			case 1:
				counter2 = 0;
				counter3 = 0;
				attempt = 5;
				check = 0;
				check1 = 0;
				check2 = 0;
				check3 = 0;
				character = '\0';

				if (counter == 0)
				{
					while (counter2 != 4)
					{

						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "          M _ _ T _ _ A        " << endl << endl;

						cout << endl << "Attempts Remaining = " << attempt << endl;
						cout << "Enter a suitable character : ";
						cin >> character;

						{
							if (character == 'U')
							{
								check++;
								counter++;
							}

							else if (character == 'S')
							{
								check1++;
								counter++;

							}

							else if (character == 'F')
							{
								check2++;
								counter++;
							}

							else if (character == 'A')
							{
								check3++;
								counter++;
							}
						}

						{
							if (check == 1 && character == 'U')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check1 == 1 && character == 'S')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check2 == 1 && character == 'F')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check3 == 1 && character == 'A')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else
							{
								system("cls");
								cout << "INVALID INPUT\n\n";
								attempt--;
							}
						}


						if (attempt == 0)
						{
							break;
						}
					}

					system("cls");

					if (counter2 == 4)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "         M U S T A F A         " << endl << endl;
						cout << "CONGRATULATIONS " << endl << endl << endl;
					}

					else if (attempt == 0)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|              |              |" << endl;
						cout << "|              |              |" << endl;
						cout << "|              O              |" << endl;
						cout << "|              |/             |" << endl;
						cout << "|             /|              |" << endl;
						cout << "|             //              |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "         M U S T A F A         " << endl << endl;
						cout << "YOU ARE DEAD!" << endl << endl;
					}

				}

				else if (counter == 1)
				{
					while (counter2 != 2)
					{

						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "            _ H _ L            " << endl << endl;

						cout << endl << "Attempts Remaining = " << attempt << endl;
						cout << "Enter a suitable character : ";
						cin >> character;

						{
							if (character == 'A')
							{
								check++;
								counter3++;
							}

							else if (character == 'I')
							{
								check1++;
								counter3++;
							}
						}

						{
							if (check == 1 && character == 'A')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check1 == 1 && character == 'I')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else
							{
								system("cls");
								cout << "INVALID INPUT\n\n";
								attempt--;
							}
						}


						if (attempt == 0)
						{
							break;
						}
					}

					system("cls");

					if (counter2 == 2)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "            A H I L            " << endl << endl;
						cout << "CONGRATULATIONS " << endl << endl << endl;
					}

					else if (attempt == 0)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|              |              |" << endl;
						cout << "|              |              |" << endl;
						cout << "|              O              |" << endl;
						cout << "|              |/             |" << endl;
						cout << "|             /|              |" << endl;
						cout << "|             //              |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "             A H I L           " << endl << endl;
						cout << "YOU ARE DEAD!" << endl << endl;
					}


				}

				else if (counter == 2)
				{
					while (counter2 != 4)
					{

						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "         A B _ _ L _ A _       " << endl << endl;

						cout << endl << "Attempts Remaining = " << attempt << endl;
						cout << "Enter a suitable character : ";
						cin >> character;

						{
							if (character == 'D')
							{
								check++;
								counter3++;
							}

							else if (character == 'U')
							{
								check1++;
								counter3++;
							}

							else if (character == 'L')
							{
								check2++;
								counter3++;
							}

							else if (character == 'H')
							{
								check3++;
								counter3++;
							}
						}

						{
							if (check == 1 && character == 'D')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check1 == 1 && character == 'U')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check2 == 1 && character == 'L')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check3 == 1 && character == 'H')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else
							{
								system("cls");
								cout << "INVALID INPUT\n\n";
								attempt--;
							}
						}


						if (attempt == 0)
						{
							break;
						}
					}

					system("cls");

					if (counter2 == 4)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "        A B D U L L A H        " << endl << endl;
						cout << "CONGRATULATIONS " << endl << endl << endl;
					}

					else if (attempt == 0)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|              |              |" << endl;
						cout << "|              |              |" << endl;
						cout << "|              O              |" << endl;
						cout << "|              |/             |" << endl;
						cout << "|             /|              |" << endl;
						cout << "|             //              |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "         A B D U L L A H       " << endl << endl;
						cout << "YOU ARE DEAD!" << endl << endl;
					}

				}

				else if (counter == 3)
				{
					while (counter2 != 4)
					{

						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "          S A _ _ A _ _        " << endl << endl;

						cout << endl << "Attempts Remaining = " << attempt << endl;
						cout << "Enter a suitable character : ";
						cin >> character;

						{
							if (character == 'Q')
							{
								check++;
								counter3++;
							}

							else if (character == 'L')
							{
								check1++;
								counter3++;
							}

							else if (character == 'I')
							{
								check2++;
								counter3++;
							}

							else if (character == 'N')
							{
								check3++;
								counter3++;
							}
						}

						{
							if (check == 1 && character == 'Q')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check1 == 1 && character == 'L')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check2 == 1 && character == 'I')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check3 == 1 && character == 'N')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else
							{
								system("cls");
								cout << "INVALID INPUT\n\n";
								attempt--;
							}
						}


						if (attempt == 0)
						{
							break;
						}
					}

					system("cls");

					if (counter2 == 4)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "         S A Q L A I N         " << endl << endl;
						cout << "CONGRATULATIONS " << endl << endl << endl;
					}

					else if (attempt == 0)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|              |              |" << endl;
						cout << "|              |              |" << endl;
						cout << "|              O              |" << endl;
						cout << "|              |/             |" << endl;
						cout << "|             /|              |" << endl;
						cout << "|             //              |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "          S A Q L A I N        " << endl << endl;
						cout << "YOU ARE DEAD!" << endl << endl;
					}

				}

				else if (counter == 4)
				{
					while (counter2 != 2)
					{

						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "            _ N A _            " << endl << endl;

						cout << endl << "Attempts Remaining = " << attempt << endl;
						cout << "Enter a suitable character : ";
						cin >> character;

						{
							if (character == 'A')
							{
								check++;
								counter3++;
							}

							else if (character == 'M')
							{
								check1++;
								counter3++;
							}
						}

						{
							if (check == 1 && character == 'A')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								cout << counter3 << " : " << character << endl << endl;
								counter2++;
							}

							else if (check1 == 1 && character == 'M')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								cout << counter3 << " : " << character << endl << endl;
								counter2++;
							}

							else
							{
								system("cls");
								cout << "INVALID INPUT\n\n";
								attempt--;
							}
						}


						if (attempt == 0)
						{
							break;
						}
					}

					system("cls");

					if (counter2 == 2)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "             A N A M           " << endl << endl;
						cout << "CONGRATULATIONS " << endl << endl << endl;
					}

					else if (attempt == 0)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|              |              |" << endl;
						cout << "|              |              |" << endl;
						cout << "|              O              |" << endl;
						cout << "|              |/             |" << endl;
						cout << "|             /|              |" << endl;
						cout << "|             //              |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "            A N A M            " << endl << endl;
						cout << "YOU ARE DEAD!" << endl << endl;
					}

				}

				counter++;
				if (counter >= 5)
				{
					counter = 0;
				}
				break;

			case 2:
				counter2 = 0;
				counter3 = 0;
				attempt = 5;
				check = 0;
				check1 = 0;
				check2 = 0;
				check3 = 0;
				character = '\0';

				if (counter == 0)
				{
					while (counter2 != 3)
					{

						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "          _ A _ _ R E          " << endl << endl;

						cout << endl << "Attempts Remaining = " << attempt << endl;
						cout << "Enter a suitable character : ";
						cin >> character;

						{
							if (character == 'L')
							{
								check++;
								counter3++;
							}

							else if (character == 'H')
							{
								check1++;
								counter3++;
							}

							else if (character == 'O')
							{
								check2++;
								counter3++;
							}

						}

						{
							if (check == 1 && character == 'L')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check1 == 1 && character == 'H')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check2 == 1 && character == 'O')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else
							{
								system("cls");
								cout << "INVALID INPUT\n\n";
								attempt--;
							}
						}


						if (attempt == 0)
						{
							break;
						}
					}

					system("cls");

					if (counter2 == 3)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "           L A H O R E         " << endl << endl;
						cout << "CONGRATULATIONS " << endl << endl << endl;
					}

					else if (attempt == 0)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|              |              |" << endl;
						cout << "|              |              |" << endl;
						cout << "|              O              |" << endl;
						cout << "|              |/             |" << endl;
						cout << "|             /|              |" << endl;
						cout << "|             //              |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "          L A H O R E          " << endl << endl;
						cout << "YOU ARE DEAD!" << endl << endl;
					}

				}

				else if (counter == 1)
				{
					while (counter2 != 4)
					{

						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "      B _ _ M I N _ _ A M      " << endl << endl;

						cout << endl << "Attempts Remaining = " << attempt << endl;
						cout << "Enter a suitable character : ";
						cin >> character;

						{
							if (character == 'I')
							{
								check++;
								counter3++;
							}

							else if (character == 'R')
							{
								check1++;
							}

							else if (character == 'G')
							{
								check2++;
							}

							else if (character == 'H')
							{
								check3++;
							}
						}

						{
							if (check == 1 && character == 'I')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check1 == 1 && character == 'R')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check2 == 1 && character == 'G')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check3 == 1 && character == 'H')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else
							{
								system("cls");
								cout << "INVALID INPUT\n\n";
								attempt--;
							}
						}


						if (attempt == 0)
						{
							break;
						}
					}

					system("cls");

					if (counter2 == 4)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "      B I R M I N G H A M      " << endl << endl;

						cout << "CONGRATULATIONS " << endl << endl << endl;
					}

					else if (attempt == 0)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|              |              |" << endl;
						cout << "|              |              |" << endl;
						cout << "|              O              |" << endl;
						cout << "|              |/             |" << endl;
						cout << "|             /|              |" << endl;
						cout << "|             //              |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "       B I R M I N G H A M     " << endl << endl;
						cout << "YOU ARE DEAD!" << endl << endl;
					}


				}

				else if (counter == 2)
				{
					while (counter2 != 3)
					{

						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "          V _ _ I _ E          " << endl << endl;

						cout << endl << "Attempts Remaining = " << attempt << endl;
						cout << "Enter a suitable character : ";
						cin >> character;

						{
							if (character == 'E')
							{
								check++;
							}

							else if (character == 'N')
							{
								check1++;
							}

							else if (character == 'C')
							{
								check2++;
							}

						}

						{
							if (check == 1 && character == 'E')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check1 == 1 && character == 'N')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check2 == 1 && character == 'C')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else
							{
								system("cls");
								cout << "INVALID INPUT\n\n";
								attempt--;
							}
						}


						if (attempt == 0)
						{
							break;
						}
					}

					system("cls");

					if (counter2 == 3)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "           V E N I C E         " << endl << endl;
						cout << "CONGRATULATIONS " << endl << endl << endl;
					}

					else if (attempt == 0)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|              |              |" << endl;
						cout << "|              |              |" << endl;
						cout << "|              O              |" << endl;
						cout << "|              |/             |" << endl;
						cout << "|             /|              |" << endl;
						cout << "|             //              |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "           V E N I C E         " << endl << endl;
						cout << "YOU ARE DEAD!" << endl << endl;
					}

				}

				else if (counter == 3)
				{
					while (counter2 != 3)
					{

						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "            _ O _ _ O          " << endl << endl;

						cout << endl << "Attempts Remaining = " << attempt << endl;
						cout << "Enter a suitable character : ";
						cin >> character;

						{
							if (character == 'T')
							{
								check++;
							}

							else if (character == 'K')
							{
								check1++;
							}

							else if (character == 'Y')
							{
								check2++;
							}
						}

						{
							if (check == 1 && character == 'T')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check1 == 1 && character == 'K')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check2 == 1 && character == 'Y')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check3 == 1 && character == 'H')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else
							{
								system("cls");
								cout << "INVALID INPUT\n\n";
								attempt--;
							}
						}


						if (attempt == 0)
						{
							break;
						}
					}

					system("cls");

					if (counter2 == 3)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "           T O K Y O           " << endl << endl;
						cout << "CONGRATULATIONS " << endl << endl << endl;
					}

					else if (attempt == 0)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|              |              |" << endl;
						cout << "|              |              |" << endl;
						cout << "|              O              |" << endl;
						cout << "|              |/             |" << endl;
						cout << "|             /|              |" << endl;
						cout << "|             //              |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "           T O K Y O           " << endl << endl;
						cout << "YOU ARE DEAD!" << endl << endl;
					}

				}
				
				else if (counter == 4)
				{
					while (counter2 != 4)
					{

						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "          _ E _ _ _ N          " << endl << endl;

						cout << endl << "Attempts Remaining = " << attempt << endl;
						cout << "Enter a suitable character : ";
						cin >> character;

						{
							if (character == 'B')
							{
								check++;
							}

							else if (character == 'R')
							{
								check1++;
							}

							else if (character == 'L')
							{
								check2++;
							}

							else if (character == 'I')
							{
								check3++;
							}
						}

						{
							if (check == 1 && character == 'B')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check1 == 1 && character == 'R')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check2 == 1 && character == 'L')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check3 == 1 && character == 'I')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else
							{
								system("cls");
								cout << "INVALID INPUT\n\n";
								attempt--;
							}
						}


						if (attempt == 0)
						{
							break;
						}
					}

					system("cls");

					if (counter2 == 4)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "          B E R L I N          " << endl << endl;
						cout << "CONGRATULATIONS " << endl << endl << endl;
					}

					else if (attempt == 0)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|              |              |" << endl;
						cout << "|              |              |" << endl;
						cout << "|              O              |" << endl;
						cout << "|              |/             |" << endl;
						cout << "|             /|              |" << endl;
						cout << "|             //              |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "          B E R L I N          " << endl << endl;
						cout << "YOU ARE DEAD!" << endl << endl;
					}

				}

				counter++;
				if (counter >= 5)
				{
					counter = 0;
				}
				break;

			case 3:
				counter2 = 0;
				attempt = 5;
				check = 0;
				check1 = 0;
				check2 = 0;
				check3 = 0;
				check4 = 0;
				character = '\0';


				if (counter == 0)
				{
					while (counter2 != 4)
					{

						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "       I _ _ E _ T I _ N       " << endl << endl;

						cout << endl << "Attempts Remaining = " << attempt << endl;
						cout << "Enter a suitable character : ";
						cin >> character;

						{
							if (character == 'N')
							{
								check++;
							}

							else if (character == 'C')
							{
								check1++;
							}

							else if (character == 'P')
							{
								check2++;
							}

							else if (character == 'O')
							{
								check3++;
							}

						}

						{
							if (check == 1 && character == 'N')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check1 == 1 && character == 'C')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check2 == 1 && character == 'P')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check3 == 1 && character == 'O')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else
							{
								system("cls");
								cout << "INVALID INPUT\n\n";
								attempt--;
							}
						}


						if (attempt == 0)
						{
							break;
						}
					}

					system("cls");

					if (counter2 == 4)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "       I N C E P T I O N       " << endl << endl;
						cout << "CONGRATULATIONS " << endl << endl << endl;
					}

					else if (attempt == 0)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|              |              |" << endl;
						cout << "|              |              |" << endl;
						cout << "|              O              |" << endl;
						cout << "|              |/             |" << endl;
						cout << "|             /|              |" << endl;
						cout << "|             //              |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "        I N C E P T I O N      " << endl << endl;
						cout << "          YOU ARE DEAD!        " << endl << endl;
					}

				}

				else if (counter == 1)
				{
					while (counter2 != 5)
					{

						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "D _ A N _ O   U N _ _ A I _ E D " << endl << endl;

						cout << endl << "Attempts Remaining = " << attempt << endl;
						cout << "Enter a suitable character : ";
						cin >> character;

						{
							if (character == 'J')
							{
								check++;
							}

							else if (character == 'G')
							{
								check1++;
							}

							else if (character == 'C')
							{
								check2++;
							}

							else if (character == 'H')
							{
								check3++;
							}

							else if (character == 'N')
							{
								check4++;
							}
						}

						{
							if (check == 1 && character == 'J')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check1 == 1 && character == 'G')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check2 == 1 && character == 'C')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check3 == 1 && character == 'H')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check4 == 1 && character == 'N')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else
							{
								system("cls");
								cout << "INVALID INPUT\n\n";
								attempt--;
							}
						}


						if (attempt == 0)
						{
							break;
						}
					}

					system("cls");

					if (counter2 == 5)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "D J A N G O   U N C H A I N E D" << endl << endl;
						cout << "CONGRATULATIONS " << endl << endl << endl;
					}

					else if (attempt == 0)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|              |              |" << endl;
						cout << "|              |              |" << endl;
						cout << "|              O              |" << endl;
						cout << "|              |/             |" << endl;
						cout << "|             /|              |" << endl;
						cout << "|             //              |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "D J A N G O   U N C H A I N E D" << endl << endl;
						cout << "YOU ARE DEAD!" << endl << endl;
					}


				}

				else if (counter == 2)
				{
					while (counter2 != 5)
					{

						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "       F I _ _ T   C _ _ _     " << endl << endl;

						cout << endl << "Attempts Remaining = " << attempt << endl;
						cout << "Enter a suitable character : ";
						cin >> character;

						{
							if (character == 'G')
							{
								check++;
							}

							else if (character == 'H')
							{
								check1++;
							}

							else if (character == 'L')
							{
								check2++;
							}

							else if (character == 'U')
							{
								check3++;
							}

							else if (character == 'B')
							{
								check4++;
							}

						}

						{
							if (check == 1 && character == 'G')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check1 == 1 && character == 'H')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check2 == 1 && character == 'L')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check3 == 1 && character == 'U')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check4 == 1 && character == 'B')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else
							{
								system("cls");
								cout << "INVALID INPUT\n\n";
								attempt--;
							}
						}


						if (attempt == 0)
						{
							break;
						}
					}

					system("cls");

					if (counter2 == 5)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "      F I G H T   C L U B      " << endl << endl;
						cout << "CONGRATULATIONS " << endl << endl << endl;
					}

					else if (attempt == 0)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|              |              |" << endl;
						cout << "|              |              |" << endl;
						cout << "|              O              |" << endl;
						cout << "|              |/             |" << endl;
						cout << "|             /|              |" << endl;
						cout << "|             //              |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "       F I G H T   C L U B     " << endl << endl;
						cout << "The correct word is " << endl;
					}

				}
				else if (counter == 3)
				{
					while (counter2 != 4)
					{

						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "        S _ A _   _ _ R _      " << endl << endl;

						cout << endl << "Attempts Remaining = " << attempt << endl;
						cout << "Enter a suitable character : ";
						cin >> character;

						{
							if (character == 'T')
							{
								check++;
							}

							else if (character == 'R')
							{
								check1++;
							}

							else if (character == 'W')
							{
								check2++;
							}

							else if (character == 'A')
							{
								check3++;
							}

							else if (character == 'S')
							{
								check4++;
							}
						}

						{
							if (check == 1 && character == 'T')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check1 == 1 && character == 'R')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check2 == 1 && character == 'W')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check3 == 1 && character == 'A')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check4 == 1 && character == 'S')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else
							{
								system("cls");
								cout << "INVALID INPUT\n\n";
								attempt--;
							}
						}


						if (attempt == 0)
						{
							break;
						}
					}

					system("cls");

					if (counter2 == 5)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "       S T A R   W A R S       " << endl << endl;
						cout << "CONGRATULATIONS " << endl << endl << endl;
					}

					else if (attempt == 0)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|              |              |" << endl;
						cout << "|              |              |" << endl;
						cout << "|              O              |" << endl;
						cout << "|              |/             |" << endl;
						cout << "|             /|              |" << endl;
						cout << "|             //              |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "       S T A R   W A R S       " << endl << endl;
						cout << "YOU ARE DEAD!" << endl << endl;
					}

				}

				else if (counter == 4)
				{
					while (counter2 != 5)
					{

						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "    _ N _ E R _ T E L _ _ R    " << endl << endl;

						cout << endl << "Attempts Remaining = " << attempt << endl;
						cout << "Enter a suitable character : ";
						cin >> character;

						{
							if (character == 'I')
							{
								check++;
							}

							else if (character == 'T')
							{
								check1++;
							}

							else if (character == 'S')
							{
								check2++;
							}

							else if (character == 'L')
							{
								check3++;
							}

							else if (character == 'E')
							{
								check4++;
							}
						}

						{
							if (check == 1 && character == 'I')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check1 == 1 && character == 'T')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check2 == 1 && character == 'S')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check3 == 1 && character == 'L')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else if (check4 == 1 && character == 'E')
							{
								system("cls");
								cout << "CORRECT INPUT\n\n";
								counter2++;
							}

							else
							{
								system("cls");
								cout << "INVALID INPUT\n\n";
								attempt--;
							}
						}


						if (attempt == 0)
						{
							break;
						}
					}

					system("cls");

					if (counter2 == 5)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "    I N T E R S T E L L E R    " << endl << endl;
						cout << "CONGRATULATIONS " << endl << endl << endl;
					}

					else if (attempt == 0)
					{
						cout << "|-----------------------------|" << endl;
						cout << "|           Hangman           |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|              |              |" << endl;
						cout << "|              |              |" << endl;
						cout << "|              O              |" << endl;
						cout << "|              |/             |" << endl;
						cout << "|             /|              |" << endl;
						cout << "|             //              |" << endl;
						cout << "|                             |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|     Available Characters    |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|A  B  C  D  E  F  G  H  I  J |" << endl;
						cout << "|K  L  M  N  O  P  Q  R  S  T |" << endl;
						cout << "|      U  V  W  X  Y  Z       |" << endl;
						cout << "|-----------------------------|" << endl;
						cout << "|        Guess the name       |" << endl;
						cout << "|-----------------------------|" << endl << endl;

						cout << "    I N T E R S T E L L E R    " << endl << endl;
						cout << "YOU ARE DEAD!" << endl << endl;
					}

				}
				counter++;
				if (counter >= 5)
				{
					counter = 0;
				}
				break;

			default:
				system("cls");
				cout << "INVALID INPUT" << endl << endl;
				return 0;
			}
			
			cout << "You want to try again ?" << endl << endl;
			cout << "Press Y to continue else press N." << endl << endl;
			cout << "Please enter your choice : ";
			cin >> choice3;

	}while (choice3 == 'Y' || choice3 == 'y');

	system("cls");

	cout << "Bye Bye, Have a great time :) " << endl << endl << endl;

	system("PAUSE");
	return 0;
}