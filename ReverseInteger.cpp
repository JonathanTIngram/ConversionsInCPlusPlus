//Jonathan Ingram
//11/13/2019
//A function that receives an integer.
//The function will return a string containing the binary representation of the integer

#include <string>
#include <vector>
#include <algorithm> //used for the reverse function
#include <iostream>

using namespace std;


string decToBin(int dec) {
	
	vector<string> binString;
	vector<string>::iterator it;


	int remainder = dec % 2;
	int quotient = dec / 2;

	string decToString = to_string(remainder);

	binString.push_back(decToString);

	while (quotient > 0) {
		remainder = quotient % 2;
		quotient = quotient / 2;

		decToString = to_string(remainder);

		binString.push_back(decToString);
	}

	reverse(binString.begin(), binString.end()); //reverse the remainders
	for (it = binString.begin(); it != binString.end(); it++) {  //display binary representation
		cout << *it << " ";
	}


	return binString[0];


}
int main()
{
	int dec = 0;

	cout << "Enter a decimal: ";
	cin >> dec;

	string binNum = decToBin(dec);



	return 0;
}