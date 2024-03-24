//This is a program transforming binary to decimal.
#include <iostream>
#include <string>

using namespace std;

int binary_to_decimal(string binary)
{
	int power = 1;
	int decimal = 0;

	for (int i = binary.size() - 1; i >= 0; i--)
	{
		if (binary[i] == '1')
		{
			decimal += power;
		}
		power <<= 1;
	}

	return decimal;
}

int main(void)
{
	string binary = "10101101";
	int decimal = binary_to_decimal(binary);

	cout << "binary " << binary << " to decimal :" << decimal << endl;

	return 0;
}