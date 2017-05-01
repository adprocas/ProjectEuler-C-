#include <iostream>

using namespace std;

const int NUMBER_OF_MULTIPLES = 2;

int main() {
	int limit = 1000;
	int multiples[NUMBER_OF_MULTIPLES] = { 3, 5 };
	int sum = 0;

	//iterate from 1 to 1000
	for (int n = 1; n < 1000; n++) {
		//iterate through all possible multiples
		for (int x = 0; x < NUMBER_OF_MULTIPLES; x++) {
			//if it finds one, break out of the inner loop and 
			//add the current number to the sum
			if (n % multiples[x] == 0) {
				sum += n;
				break;
			}
		}
	}

	cout << sum << endl;
}
