#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int size = 100;
	string names[size];
	int rolln[size], markscs[size], marksmaths[size], percentage[size], obtmarks[size];
	char grades[size];
	int counter = 0, sum = 0, rollcheck = 0, check = 0;
	char choice = 'Y', choice2 = '\0', choice3 = '\0';

	
	for (int count = 0; choice == 'Y'; count++)
	{

		cout << "------------------------------------------------------------------------------------------------------------------------\n";
		cout << "                                             WELCOME TO ADMIN PANEL!                                                    \n";
		cout << "------------------------------------------------------------------------------------------------------------------------\n";
		cout << "                            Enter Students roll number and their data to enroll them                                    \n";
		cout << "------------------------------------------------------------------------------------------------------------------------\n";


		cout << "Enter the roll number of Student " << count + 1 << " : ";
		cin >> rolln[count];
		cout << endl;
		
		cout << "Enter the name of student " << count + 1 << " : ";
		cin >> names[count];
		cout << endl;

		cout << "Enter the computer marks of student " << count + 1 << " : ";
		cin >> markscs[count];
		cout << endl;

		if (markscs[count] > 100)
		{
			do
			{
				cout << "WRONG INPUT! \n";
				cout << "Enter Again \n\n";
				cout << "Enter the computer marks of student " << count + 1 << " : ";
				cin >> markscs[count];
				cout << endl;
			} while (markscs[count] > 100);
		}

		cout << "enter the mathematics marks of student " << count + 1 << " : ";
		cin >> marksmaths[count];
		cout << endl;

		if (marksmaths[count] > 100)
		{
			do
			{
				cout << "WRONG INPUT! \n";
				cout << "Enter Again \n\n";
				cout << "enter the mathematics marks of student " << count + 1 << " : ";
				cin >> marksmaths[count];
				cout << endl;
			} while (marksmaths[count] > 100);
		}
		
		obtmarks[count] = markscs[count] + marksmaths[count];

		percentage[count] = (obtmarks[count] * 100) / 200;

		if (percentage[count] >= 91 && percentage[count] <= 100)
		{
			grades[count] = 'A';
		}

		else if (percentage[count] >= 75 && percentage[count] <= 90)
		{
			grades[count] = 'B';
		}

		else if (percentage[count] >= 60 && percentage[count] < 75)
		{
			grades[count] = 'C';
		}

		else if (percentage[count] >= 50 && percentage[count] < 60)
		{
			grades[count] = 'D';
		}
		else if (percentage[count] < 50)
		{
			grades[count] = 'F';
		}
		else
		{
			cout << "ERROR" << endl;
			break;
		}

		counter++;

		cout << "Enter Y/y to continue entering the data of students or N/n to exit : ";
		cin >> choice;
		cout << endl;

		system("cls");
	}

	cout << "Roll Number \t\t\t ";
	cout << "Name \t\t\t ";
	cout << "CS Marks \t\t";
	cout << "Maths Marks \t\t ";
	cout << "Percentage \t\t ";
	cout << "Grades \t\t \n\n";
	for (int count = 0; count < counter; count++)
	{
		cout << rolln[count] << "\t\t\t ";
		cout << names[count] << "\t\t\t ";
		cout << markscs[count] << "\t\t ";
		cout << marksmaths[count] << "\t\t ";
		cout << percentage[count] << "\t\t ";
		cout << grades[count] << "\t\t \n\n";
	}
	cout << endl;
	

	cout << "Do you want to perform other operations! \n";
	cout << "Enter Y/y to perform other operations or N/n to exit : ";
	cin >> choice2;

	if (choice2 == 'Y' || choice2 == 'y')
	{
		system("cls");
		cout << "Choose from the following menu :- \n";
		cout << "Enter 1 to update roll number of a particular student \n";
		cout << "Enter 2 to update computer science marks of a particular student \n";
		cout << "Enter 3 to update computer science marks of all students who are already enrolled \n";
		cout << "Enter 4 to update mathematics marks of a particular student \n";
		cout << "Enter 5 to update mathematics marks of all students who are already enrolled \n";
		cout << "Enter 6 to sort data on the basis of generated percentage \n";
		cout << "Enter 7 to delete the complete record of a particular student \n\n";
		cout << "Enter your choice : ";
		cin >> choice3;

		switch (choice2)
		{
		case 1:
			system("cls");
			
			cout << "Roll Number \t\t\t ";
			cout << "Name \t\t\t ";
			cout << "CS Marks \t\t";
			cout << "Maths Marks \t\t ";
			cout << "Percentage \t\t ";
			cout << "Grades \t\t \n\n";
			for (int count = 0; count < counter; count++)
			{
				cout << rolln[count] << "\t\t\t ";
				cout << names[count] << "\t\t\t ";
				cout << markscs[count] << "\t\t ";
				cout << marksmaths[count] << "\t\t ";
				cout << percentage[count] << "\t\t ";
				cout << grades[count] << "\t\t \n\n";
			}
			cout << endl;

			do
			{
				cout << "Enter roll number of the student to update roll number : ";
				cin >> rollcheck;

				for (int i = 0; i < counter; i++)
				{
					if (rollcheck == rolln[i])
					{
						cout << "Enter the correct roll number : ";
						cin >> rolln[i];
						check++;
						break;
					}
					else if (i == 99)
					{
						cout << "No roll number found \n Enter again = ";
						break;
					}
				}
			} while (check == 0);

			system("cls");
			cout << "Roll number is updated \n";
			break;
		case 2:
			system("cls");

			cout << "Roll Number \t\t\t ";
			cout << "Name \t\t\t ";
			cout << "CS Marks \t\t";
			cout << "Maths Marks \t\t ";
			cout << "Percentage \t\t ";
			cout << "Grades \t\t \n\n";
			for (int count = 0; count < counter; count++)
			{
				cout << rolln[count] << "\t\t\t ";
				cout << names[count] << "\t\t\t ";
				cout << markscs[count] << "\t\t ";
				cout << marksmaths[count] << "\t\t ";
				cout << percentage[count] << "\t\t ";
				cout << grades[count] << "\t\t \n\n";
			}
			cout << endl;

			do
			{
				cout << "Enter roll number of the student to update CS marks :";
				cin >> rollcheck;

				for (int i = 0; i < counter; i++)
				{
					if (rollcheck == rolln[i])
					{
						cout << "Enter the correct marks : ";
						cin >> markscs[i];
						check++;
						break;
					}
					else if (i == 99)
					{
						cout << "No roll number found \n Enter again = ";
						break;
					}
				}

			} while (check == 0);
			break;
		case 3:
			system("cls");

			cout << "Roll Number \t\t\t ";
			cout << "Name \t\t\t ";
			cout << "CS Marks \t\t";
			cout << "Maths Marks \t\t ";
			cout << "Percentage \t\t ";
			cout << "Grades \t\t \n\n";
			for (int count = 0; count < counter; count++)
			{
				cout << rolln[count] << "\t\t\t ";
				cout << names[count] << "\t\t\t ";
				cout << markscs[count] << "\t\t ";
				cout << marksmaths[count] << "\t\t ";
				cout << percentage[count] << "\t\t ";
				cout << grades[count] << "\t\t \n\n";
			}
			cout << endl;

			do
			{
				cout << "Enter roll number of the student to update CS marks :";
				cin >> rollcheck;

				for (int i = 0; i < counter; i++)
				{
					if (rollcheck == rolln[i])
					{
						cout << "GOOD! LETS ENTER THE MARKS AGAIN \n\n";
						check++;
						break;
					}
					else if (i == 99)
					{
						cout << "No roll number found \n Enter again = ";
						break;
					}
				}

			} while (check == 0);

			for (int count = 0; count < size; count++)
			{
				cout << "Enter the CS marks of student " << count + 1 << " : ";
				cin >> markscs[count];
			}
			
			system("cls");

			cout << "Roll Number \t\t\t ";
			cout << "Name \t\t\t ";
			cout << "CS Marks \t\t";
			cout << "Maths Marks \t\t ";
			cout << "Percentage \t\t ";
			cout << "Grades \t\t \n\n";
			for (int count = 0; count < counter; count++)
			{
				cout << rolln[count] << "\t\t\t ";
				cout << names[count] << "\t\t\t ";
				cout << markscs[count] << "\t\t ";
				cout << marksmaths[count] << "\t\t ";
				cout << percentage[count] << "\t\t ";
				cout << grades[count] << "\t\t \n\n";
			}
			cout << endl;

			break;
		case 4:
			system("cls");

			cout << "Roll Number \t\t\t ";
			cout << "Name \t\t\t ";
			cout << "CS Marks \t\t";
			cout << "Maths Marks \t\t ";
			cout << "Percentage \t\t ";
			cout << "Grades \t\t \n\n";
			for (int count = 0; count < counter; count++)
			{
				cout << rolln[count] << "\t\t\t ";
				cout << names[count] << "\t\t\t ";
				cout << markscs[count] << "\t\t ";
				cout << marksmaths[count] << "\t\t ";
				cout << percentage[count] << "\t\t ";
				cout << grades[count] << "\t\t \n\n";
			}
			cout << endl;

			do
			{
				cout << "Enter roll number of the student to update CS marks :";
				cin >> rollcheck;

				for (int i = 0; i < counter; i++)
				{
					if (rollcheck == rolln[i])
					{
						cout << "Enter the correct marks : ";
						cin >> marksmaths[i];
						check++;
						break;
					}
					else if (i == 99)
					{
						cout << "No roll number found \n Enter again = ";
						break;
					}
				}

			} while (check == 0);
			break;

		case 5:
			system("cls");

			cout << "Roll Number \t\t\t ";
			cout << "Name \t\t\t ";
			cout << "CS Marks \t\t";
			cout << "Maths Marks \t\t ";
			cout << "Percentage \t\t ";
			cout << "Grades \t\t \n\n";
			for (int count = 0; count < counter; count++)
			{
				cout << rolln[count] << "\t\t\t ";
				cout << names[count] << "\t\t\t ";
				cout << markscs[count] << "\t\t ";
				cout << marksmaths[count] << "\t\t ";
				cout << percentage[count] << "\t\t ";
				cout << grades[count] << "\t\t \n\n";
			}
			cout << endl;

			do
			{
				cout << "Enter roll number of the student to update CS marks :";
				cin >> rollcheck;

				for (int i = 0; i < counter; i++)
				{
					if (rollcheck == rolln[i])
					{
						cout << "GOOD! LETS ENTER THE MARKS AGAIN \n\n";
						check++;
						break;
					}
					else if (i == 99)
					{
						cout << "No roll number found \n Enter again = ";
						break;
					}
				}

			} while (check == 0);

			for (int count = 0; count < size; count++)
			{
				cout << "Enter the Maths marks of student " << count + 1 << " : ";
				cin >> marksmaths[count];
			}

			system("cls");

			cout << "Roll Number \t\t\t ";
			cout << "Name \t\t\t ";
			cout << "CS Marks \t\t";
			cout << "Maths Marks \t\t ";
			cout << "Percentage \t\t ";
			cout << "Grades \t\t \n\n";
			for (int count = 0; count < counter; count++)
			{
				cout << rolln[count] << "\t\t\t ";
				cout << names[count] << "\t\t\t ";
				cout << markscs[count] << "\t\t ";
				cout << marksmaths[count] << "\t\t ";
				cout << percentage[count] << "\t\t ";
				cout << grades[count] << "\t\t \n\n";
			}
			cout << endl;

			break;
		case 6:
			for (int i = 0; i < size - 1; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (percentage[i] > percentage[j])
					{

						swap(percentage[i], percentage[j]);
						swap(rolln[i], rolln[j]);
						swap(names[i], names[j]);
						swap(markscs[i], markscs[j]);
						swap(marksmaths[i], marksmaths[j]);
						swap(grades[i], grades[j]);
					}
				}
			}

			system("cls");

			cout << "Roll Number \t\t\t ";
			cout << "Name \t\t\t ";
			cout << "CS Marks \t\t";
			cout << "Maths Marks \t\t ";
			cout << "Percentage \t\t ";
			cout << "Grades \t\t \n\n";
			for (int count = 0; count < counter; count++)
			{
				cout << rolln[count] << "\t\t\t ";
				cout << names[count] << "\t\t\t ";
				cout << markscs[count] << "\t\t ";
				cout << marksmaths[count] << "\t\t ";
				cout << percentage[count] << "\t\t ";
				cout << grades[count] << "\t\t \n\n";
			}
			cout << endl;

			break;
		case 7:
			system("cls");

			cout << "Roll Number \t\t\t ";
			cout << "Name \t\t\t ";
			cout << "CS Marks \t\t";
			cout << "Maths Marks \t\t ";
			cout << "Percentage \t\t ";
			cout << "Grades \t\t \n\n";
			for (int count = 0; count < counter; count++)
			{
				cout << rolln[count] << "\t\t\t ";
				cout << names[count] << "\t\t\t ";
				cout << markscs[count] << "\t\t ";
				cout << marksmaths[count] << "\t\t ";
				cout << percentage[count] << "\t\t ";
				cout << grades[count] << "\t\t \n\n";
			}
			cout << endl;

			do
			{
				cout << "Enter roll number of the student to delete its record : ";
				cin >> rollcheck;

				for (int i = 0; i < counter; i++)
				{
					if (rollcheck == rolln[i])
					{
						rolln[i] = 0;
						names[i] = "\0";
						markscs[i] = 0;
						marksmaths[i] = 0;
						percentage[i] = 0;
						grades[i] = '\0';
						break;
					}
					else if (i == 99)
					{
						cout << "No roll number found \n Enter again = ";
						break;
					}
				}
			} while (check == 0);

			system("cls");
			cout << "Data is updated \n";
			break;
	}

	system("PAUSE");
	return 0;
}