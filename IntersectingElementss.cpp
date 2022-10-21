#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	const int size = 10;
	int array[size] = { 0 }, array1[size] = { 0 }, array2[size] = { 0 }, array3[size] = { 0 };
	bool isFound = false;
	int counter = 0;
	srand(time(0));

	for (int count = 0; count < size; count++) {
		array[count] = rand() % 10;
		array2[count] = rand() % 10;
		array3[count] = -1;
	}

	cout << "Array1 : \t";
	for (int count = 0; count < size; count++) {
		cout << array[count] << '\t';
	}cout << endl;

	cout << "Array2 : \t";
	for (int count = 0; count < size; count++) {
		cout << array2[count] << '\t';
	}cout << endl;
	
	for (int count = 0; count < size; count++) {
		for (int count2 = 0; count2 < size; count2++) {
			if (array[count] == array2[count2]) {
				isFound = true;
				break;
			}
		}

		if (isFound == true) {
			array3[counter] = array[count];
			counter++;
		}

		isFound = false;
	}
	
	cout << "AFTER INTERSECTING \n";
	cout << "Array3 : \t";
	for (int count = 0; count < counter; count++) {
		cout << array3[count] << '\t';
	}cout << endl;

	system("PAUSE");
	return 0;
}