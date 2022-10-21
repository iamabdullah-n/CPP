#include<iostream>
using namespace std;
float findMax(float, float);

int main() {
	float f1 = 0, f2 = 0;

	cout << "Enter 2 numbers = ";
	cin >> f1 >> f2;

	cout << findMax(f1, f2) << " is maximum " << endl;

	system("PAUSE");
	return 0;
}

float findMax (float p1, float p2) {
	float max;

	if (p1 > p2) {
		max = p1;
	}

	else if (p1 < p2) {
		max = p2;
	}

	return max;
}