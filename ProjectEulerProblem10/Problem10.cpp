#include "../EulerLib/Utils.hpp"
#include <iostream>

using namespace std;

long long primeSum(long long limit);

int main() {
	long long nthPrime = primeSum(2000000LL);

	cout << "Project Euler Problem 10 Answer:" << endl;

	cout << nthPrime << endl;
}

long long primeSum(long long limit) {
	long long sum = 2;

	for (long long x = 3LL; x <= limit; x += 2) {
		if (Utils::isPrime(x)) {
			sum += x;
		}
	}

	return sum;
}