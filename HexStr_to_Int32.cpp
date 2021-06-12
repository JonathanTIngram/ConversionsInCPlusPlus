//Jonathan Ingram
//11/25/2019

#include <iostream>
#include <vector>
#include <string>

using namespace std;


int hexStrToInt32(string hexStr) {
		
		int num = 0;

		for (int i = 0; ; i++) {
			if (hexStr[i] >= '0' && hexStr[i] <= '9') {
				num = num * 16 + hexStr[i];
			}
			else if (hexStr[i] >= 'A' && hexStr[i] <= 'F') {
				num = num * 16 + (hexStr[i] - 'A' + 10);
			}
			else {
				break;
			}
		}

		cout << hexStr;
		
		return num;
	}

int main()
{
	Convert convert = new Convert();
	string hexStr;

	cout << "Enter a hexadecimal string: ";
	cin >> hexStr;

	int num = hexStrToInt32(hexStr);

	cout << num;


	return 0;
}

