/*
The Expression n-1 will have all the bits flipped after the rightmost set bit of n,
including the rightmost set bit. So, n & (n-1) will result in the last bit flipped of n.

Example:

00010100 &			n = 20
00010011			n-1 = 19
--------
00010000
--------

*/

#include <iostream>
#include <bitset>
using namespace std;

unsigned unsetRightmostSetBit(unsigned n)
{
	return n & (n - 1);
}

int main()
{
	int n = 20;

	cout << n << " in binary is " << bitset<8>(n) << endl;

	cout << "Rightmost bit of " << n << " is unset\n";
	n = unsetRightmostSetBit(n);

	cout << n << " in binary is " << bitset<8>(n) << endl;

	return 0;
}