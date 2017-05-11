#include <iostream>

using namespace std;

int main() {
	int pythagoreanTriplet = 0;

	for (int c = 997; c > 0; c--) {
		for (int b = 2; b < c; b++) {
			for (int a = 1; a + b + c <= 1000; a++) {
				if ((a + b + c == 1000) && ((a * a) + (b * b) == (c * c))) {
					pythagoreanTriplet = a * b * c;

					break;
				}
			}
		}
	}

	cout << "Project Euler Problem 9 Answer:" << endl;

	cout << pythagoreanTriplet << endl;
}
