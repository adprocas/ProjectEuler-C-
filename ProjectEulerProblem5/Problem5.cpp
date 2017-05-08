#include "../EulerLib/Utils.hpp"
#include <iostream>

using namespace std;

int main() {
	long long limit = 20L;
	long long startingNumber = limit * 19L;
	long long factorialNumber = Utils::doFactorial(limit);
	long long smallestFactor;

	for (long long x = startingNumber; x <= factorialNumber; x += 20L) {
		if (Utils::hasAllFactorsToLimit(x, limit)) {
			smallestFactor = x;

			break;
		}
	}

	cout << "Project Euler Problem 5 Answer:" << endl;

	cout << smallestFactor << endl;
}
