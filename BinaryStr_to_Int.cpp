//Jonathan Ingram
//11/13/2019

#include <iostream>
#include <string.h>

using namespace std;


int binStringIntValue(string sValue)
{

	int string2int = 0;




	for (int i = 0; sValue[i] >= '0' && sValue[i] <= '1'; i++) { 
		string2int = string2int * 2 + sValue[i] - '0';
	}


	return string2int;
}

int main()
{
	string sValue;

	cout << "Enter a string: ";
	cin >> sValue;

	int num = binStringIntValue(sValue);
	
	cout << num;

	return 0;
}

