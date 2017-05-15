#include "../EulerLib/Utils.hpp"
#include <iostream>

using namespace std;

int main() {
	long long i = 2LL;
	long long triangleNumber = 1LL;
	long long factorsToFind = 500LL;
	/**
	 * The absolute maximum number of factors a number can have can be expressed by
	 * the sqrt of the number in question, multiplied by 2
	 * Therefore, we don't need to check anything below the square of the
	 * number of divisors we are looking for
	 * This number is still very low, as it would be impossible for a number to have all
	 * numbers under its sqrt to be divisors (other than 4, which would have 4, 2, and 1
	 * as divisors, with 2 and 1 being the two numbers under its sqrt, and both are divisors)
	 */
	long long limit = pow(factorsToFind, 2);

	while (true) {
		/**
		* no need to test anything that isn't divisible by 2 or 3. I don't
		* know if it is certain, but it's very unlikely that the number
		* will not be divisible by 2 and 3. Being divisible by 2 increases
		* the potential number of factors (all even numbers). The same can
		* be said for 3 (every third number)
		*/
		if (triangleNumber >= limit && triangleNumber % 2 == 0 && triangleNumber % 3 == 0) {
			if (Utils::countFactors(triangleNumber) >= factorsToFind) {
				break;
			}
		}

		triangleNumber += i;
		++i;
	}

	cout << "Project Euler Problem 12 Answer:" << endl;

	cout << triangleNumber << endl;
}
