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
