#pragma once
#include <string>

class Utils {
public:
	static long long getLargestPrimeFactor(long long number);
	static long long findNthPrimeNumber(long long n);
	static long long getFactorUpperLimit(long long number);
	static bool isPrime(long long number);

	static bool isPalindrome(int number);
	static int reverseNumber(int number);

	static long long doFactorial(long long number);
	static bool hasAllFactorsToLimit(long long number, long long limit);

	static long long computeSumOfSquares(long long limit);
	static long long computeSquareOfSums(long long limit);

	static long long getLargestProductInSeries(long long numbers[], int arraySize, int seriesLimit);

	static int countFactors(long long number);

	static void parseNumbers(std::string nums, long long numbers[]);
};
