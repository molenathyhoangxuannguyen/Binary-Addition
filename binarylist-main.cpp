/*-------------------------------------------------------------------------------
# Purpose: This lab is designed to give you familiarity with an important aspect
of binary arithmetic, namely adding 1 or incrementing which sometimes
results in the propagation of a carry through the bits.
#
# Original Authors:           Mario Nakazawa & Jan Pearce
# Original Creation date:     21/09/2014
# Increment implementation by: Thy H. Nguyen
#------------------------------------------------------------------------------*/

#include "binaryNumber.cpp"
#include <iostream> // has cout and cin defined therein
using namespace std;

int main() {

	char slowexit;

	BinaryNumber testing = BinaryNumber();
	cout << "instantiation of testing list.\n" << endl;

	int mynumber = 9999;

	testing.convert_decimal_to_binary(mynumber);
	cout << " My number is " << mynumber << " which is:" << endl;
	cout << testing.to_string() << endl;


	testing.increment();
	cout <<"After incrementing we have "<< mynumber+1 << " which is: (after being implemented):" << endl;
	cout << testing.to_string() << endl;

	testing.remove_all();
	cout << testing.to_string() << endl;

	cin >> slowexit; //to keep window open in some cases

	return 0;
}
