#include "../EulerLib/Utils.hpp"
#include <iostream>
#include <string>

using namespace std;

const int arraySize = 1000;

string getBigNumber();

int main() {
	string bigNumber = getBigNumber();

	long long numbers[arraySize];

	Utils::parseNumbers(bigNumber, numbers);

	long long largestMultiple = Utils::getLargestProductInSeries(numbers, arraySize, 13);

	cout << "Project Euler Problem 8 Answer:" << endl;

	cout << largestMultiple << endl;
}

string getBigNumber() {
	string bigNumber = "73167176531330624919225119674426574742355349194934";
	bigNumber.append("96983520312774506326239578318016984801869478851843");
	bigNumber.append("85861560789112949495459501737958331952853208805511");
	bigNumber.append("12540698747158523863050715693290963295227443043557");
	bigNumber.append("66896648950445244523161731856403098711121722383113");
	bigNumber.append("62229893423380308135336276614282806444486645238749");
	bigNumber.append("30358907296290491560440772390713810515859307960866");
	bigNumber.append("70172427121883998797908792274921901699720888093776");
	bigNumber.append("65727333001053367881220235421809751254540594752243");
	bigNumber.append("52584907711670556013604839586446706324415722155397");
	bigNumber.append("53697817977846174064955149290862569321978468622482");
	bigNumber.append("83972241375657056057490261407972968652414535100474");
	bigNumber.append("82166370484403199890008895243450658541227588666881");
	bigNumber.append("16427171479924442928230863465674813919123162824586");
	bigNumber.append("17866458359124566529476545682848912883142607690042");
	bigNumber.append("24219022671055626321111109370544217506941658960408");
	bigNumber.append("07198403850962455444362981230987879927244284909188");
	bigNumber.append("84580156166097919133875499200524063689912560717606");
	bigNumber.append("05886116467109405077541002256983155200055935729725");
	bigNumber.append("71636269561882670428252483600823257530420752963450");

	return bigNumber;
}
