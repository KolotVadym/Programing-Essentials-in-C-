#include <iostream>
using namespace std;
int isBitPalindrome(unsigned short x) {
	unsigned short reversed = 0, aux = x, count =0;
	while (aux > 0) {
		reversed = (reversed << 1) | (aux & 1);
		aux = aux >> 1;
		count++;
	}
	while (count != 16)
	{
		reversed <<= 1;
		count++;
	}
	return (reversed == x) ? 1 : 0;
}
int main(void) {

	unsigned short int val;
	bool ispalindrome = false;
	cout << "value = ";
	cin >> val;
	ispalindrome = isBitPalindrome(val);
	if (ispalindrome)
		cout << val << " is a bitwise palindrome" << endl;
	else
		cout << val << " is not a bitwise palindrome" << endl;
	cin >> val;
	return 0;
}
