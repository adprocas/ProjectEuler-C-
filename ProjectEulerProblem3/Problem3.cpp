#include <iostream>

using namespace std;

long long getLargestPrimeFactor(long long number);
long long getFactorUpperLimit(long long number);
bool isPrime(long long number);

int main() {
	auto value = 600851475143LL;
	auto largestPrimeFactor = getLargestPrimeFactor(value);
	

	cout << "Project Euler Problem 3 Answer:" << endl;

	cout << largestPrimeFactor << endl << endl;
}

long long getLargestPrimeFactor(long long number) {
	auto upperLimit = getFactorUpperLimit(number);

	for (auto x = upperLimit; x > 2LL; x -= 2LL) {
		if (number % x == 0) {
			if (isPrime(x)) {
				return x;
			}
		}
	}

	return -1;
}

long long getFactorUpperLimit(long long number) {
	auto limit = (long long)sqrt(number);

	if (limit % 2L == 0L) {
		--limit;
	}

	return limit;
}

bool isPrime(long long number) {
	if (number == 1LL || number == 2LL || number == 3LL) {
		return true;
	}
	else if (number % 2 == 0LL || number % 3 == 0LL) {
		return false;
	}

	auto initialCounter = getFactorUpperLimit(number);

	for (auto x = 5LL; x <= initialCounter; x += 2LL) {
		if (number % x == 0LL) {
			return false;
		}
	}

	return true;
}