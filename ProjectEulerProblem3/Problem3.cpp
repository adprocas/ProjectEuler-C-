#include "../EulerLib/Utils.hpp"
#include <iostream>

using namespace std;

int main() {
	auto value = 600851475143LL;
	auto largestPrimeFactor = Utils::getLargestPrimeFactor(value);
	

	cout << "Project Euler Problem 3 Answer:" << endl;

	cout << largestPrimeFactor << endl << endl;
}
