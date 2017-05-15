#include "../EulerLib/Utils.hpp"
#include <iostream>

using namespace std;

int main() {
	long long i = 2LL;
	long long triangleNumber = 1LL;
	long long limit = 500L * 500LL;

	while (true) {
		/**
		* no need to test anything that isn't divisible by 2 or 3. I don't
		* know if it is certain, but it's very unlikely that the number
		* will not be divisible by 2 and 3. Being divisible by 2 increases
		* the potential number of factors (all even numbers) the same can
		* be said for 3 (every third number)
		*/
		if (triangleNumber >= limit && triangleNumber % 2 == 0 && triangleNumber % 3 == 0) {
			int factors = Utils::countFactors(triangleNumber);
			if (factors >= 500) {
				break;
			}
		}

		triangleNumber += i;
		++i;
	}

	cout << "Project Euler Problem 12 Answer:" << endl;

	cout << triangleNumber << endl;
}
