#include "../EulerLib/Utils.hpp"
#include <iostream>

using namespace std;

int main() {
	long long nthPrime = Utils::findNthPrimeNumber(10001LL);

	cout << "Project Euler Problem 7 Answer:" << endl;

	cout << nthPrime << endl;
}
