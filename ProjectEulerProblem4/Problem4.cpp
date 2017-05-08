#include "../EulerLib/Utils.hpp"
#include <iostream>

using namespace std;

int main() {
	int largestPalindrome = 0;

	for (int x = 999; x > 0; x--) {
		for (int y = 999; y > 0; y--) {
			int multiple = x * y;
			if (Utils::isPalindrome(multiple) && multiple > largestPalindrome) {
				largestPalindrome = multiple;
			}
		}
	}

	cout << "Project Euler Problem 4 Answer:" << endl;

	cout << largestPalindrome << endl << endl;
}
