#include <iostream>

using namespace std;

bool isPalindrome(int number);
int reverseNumber(int number);

int main() {
	int largestPalindrome = 0;

	for (int x = 999; x > 0; x--) {
		for (int y = 999; y > 0; y--) {
			int multiple = x * y;
			if (isPalindrome(multiple) && multiple > largestPalindrome) {
				largestPalindrome = multiple;
			}
		}
	}

	cout << "Project Euler Problem 4 Answer:" << endl;

	cout << largestPalindrome << endl << endl;
}

bool isPalindrome(int number) {
	return number == reverseNumber(number);
}

int reverseNumber(int number) {
	int num = number;
	int reverse = 0;

	while (num != 0) {
		reverse = reverse * 10 + num % 10;
		num = num / 10;
	}

	return reverse;
}