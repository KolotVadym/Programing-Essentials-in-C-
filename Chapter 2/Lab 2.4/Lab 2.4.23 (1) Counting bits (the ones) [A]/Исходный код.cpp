#include <iostream>
using namespace std;

int main() {
	unsigned long num;
	cin >> num;
	int count=0;
	while (num!= 0)
	{
		if (num & 1 == 1)
		count++;
		num = num >> 1;
	}
	cout << count;
	cin >> num;
	return 0;
}