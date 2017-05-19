#include "../EulerLib/Utils.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long getCollatzStartingNumber();

int main() {
	long long startingNumber = getCollatzStartingNumber();

	cout << "Project Euler Problem 14 Answer:" << endl;

	cout << startingNumber << endl;
}

long long getCollatzStartingNumber() {
	int largestCollatz = 0;
	long long startingNumber = 1LL;

	for (long long x = startingNumber; x <= 1000000LL; x++) {
		int collarzNumber = 1;
		long long tempNumber = x;

		while (tempNumber != 1L) {
			if (tempNumber % 2 == 0) {
				tempNumber = tempNumber / 2;
			}
			else {
				tempNumber = (tempNumber * 3) + 1;
			}

			collarzNumber++;
		}

		if (largestCollatz < collarzNumber) {
			largestCollatz = collarzNumber;
			startingNumber = x;
		}
	}

	return startingNumber;
}
