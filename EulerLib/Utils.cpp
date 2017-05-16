#include "stdafx.h"
#include "Utils.hpp"
#include <iostream>

using namespace std;

bool Utils::isPrime(long long number) {
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

long long Utils::getFactorUpperLimit(long long number) {
	auto limit = (long long)sqrt(number);

	if (limit % 2L == 0L) {
		--limit;
	}

	return limit;
}

long long Utils::getLargestPrimeFactor(long long number) {
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

long long Utils::findNthPrimeNumber(long long n) {
	int foundPrimes = 0;
	long foundPrime = 0L;
	long x = 0L;

	while (foundPrimes <= n) {
		++x;

		if (isPrime(x)) {
			++foundPrimes;
			foundPrime = x;
		}
	}

	return foundPrime;
}

bool Utils::isPalindrome(int number) {
	return number == reverseNumber(number);
}

int Utils::reverseNumber(int number) {
	int num = number;
	int reverse = 0;

	while (num != 0) {
		reverse = reverse * 10 + num % 10;
		num = num / 10;
	}

	return reverse;
}

long long Utils::doFactorial(long long number) {
	if (number > 1) {
		long long prev = number * doFactorial(number - 1L);
		return prev;
	}

	return number;
}

bool Utils::hasAllFactorsToLimit(long long number, long long limit)
{
	for (long x = 1L; x <= limit; x++) {
		if (number % x != 0L) {
			return false;
		}
	}

	return true;
}


long long Utils::computeSumOfSquares(long long limit) {
	long long  sumOfSquares = 0LL;

	for (long long x = 0LL; x <= limit; x++) {
		sumOfSquares += x * x;
	}

	return sumOfSquares;
}

long long Utils::computeSquareOfSums(long long limit) {
	long long squareOfSums = 0LL;

	for (long long x = 0LL; x <= limit; x++) {
		squareOfSums += x;
	}

	return squareOfSums * squareOfSums;
}

long long Utils::getLargestProductInSeries(long long numbers[], int arraySize, int seriesLimit) {
	long long largestMultiple = 0L;

	for (int x = 0; x < arraySize - seriesLimit; x++) {
		long long checkMultiple = 1L;

		for (int y = 0; y < seriesLimit; y++) {
			checkMultiple *= numbers[x + y];
		}

		if (checkMultiple > largestMultiple) {
			largestMultiple = checkMultiple;
		}
	}

	return largestMultiple;
}

int Utils::countFactors(long long number) {
	int numberOfFactors = 0;
	long long upperLimit = (long long)ceil(sqrt(number));

	if (number % upperLimit == 0) {
		numberOfFactors = 1;
	}
	/**
	* I think you should only have to go up to the square
	*
	* reason:
	* To find factors of 25, for example 1, 25, and 5
	*
	* no need to check anything over 5 (5 is sqrt(25)), because we know
	* there are two for every possible combination below, which will cover
	* all of the options above
	*
	* for example, 81
	*
	* 1 - 81, 3 - 27, 9 - 9
	*
	* so, do the sqrt, find if it is a factor. If so, add 1 to total
	* factors and continue. If not, find the ceil and work up until that
	* number. All factors below the sqrt will have two factors, so add an
	* extra for each found up until sqrt
	*/
	for (int x = 1; x <= upperLimit; ++x) {
		if (number % 2 != 0 && x % 2 == 0) {
			++x;

			if (x > number) {
				break;
			}
		}

		if (number % x == 0) {
			numberOfFactors += 2;
		}
	}

	return numberOfFactors;
}

void Utils::parseNumbers(std::string nums, long long numbers[]) {
	for (int i = 0; i < nums.length(); i++) {
		numbers[i] = nums.at(i) - '0';
	}
}
