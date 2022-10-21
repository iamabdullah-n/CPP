#include<iostream>
using namespace std;
int primeNumber (int);

int main() {
	int num = 0;

	cout << "Enter a number = ";
	cin >> num;

	if (primeNumber(num) == 1) {
		cout << "Number is prime" << endl;
	}
	else {
		cout << "Number is not prime" << endl;
	}

	return 0;
}

int primeNumber (int p) {
	int result = 0, counter = 0;

	for (int count = 2; count <= p / 2; count++) {
		if (p % count == 0) {
			counter++;
		}
	}

	if (counter > 0) {
		result = 0;
	}
	else {
		result = 1;
	}

	return result;
}
