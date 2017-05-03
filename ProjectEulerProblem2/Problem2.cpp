#include <iostream>

using namespace std;

int main() {
	int max = 4000000;
	int prev = 1;
	int num = 2;
	int sum = 2;

	while (sum < max && (sum + num) < max) {	
		//temp variable for storing previous number
		int tmp = num;
		//new fibonacci number is the sum of previous and current
		num = prev + num;
		//set the previous number to the temp number (the new previous number)
		prev = tmp;

		//if it's even, add to the sum
		if (num % 2 == 0) {
			sum += num;
		}
	}

	cout << "Project Euler Problem 2 Answer:" << endl;

	cout << sum << endl << endl;
}
