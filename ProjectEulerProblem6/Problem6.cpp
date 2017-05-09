#include "../EulerLib/Utils.hpp"
#include <iostream>

using namespace std;

int main() {
	long long difference = Utils::computeSquareOfSums(100LL) - Utils::computeSumOfSquares(100LL);

	cout << "Project Euler Problem 6 Answer:" << endl;

	cout << difference << endl;
}
