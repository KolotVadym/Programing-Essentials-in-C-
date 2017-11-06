#include <iostream>
using namespace std;

void f(int num)
{
	double num1, num2;
	cout << "Enter two numbers\n";
	cin >> num1;
	cin >> num2;
	switch (num)
	{
	case 1:cout << num1 + num2; break;
	case 2:cout << num1 - num2;; break;
	case 3:cout << num1 * num2;; break;
	case 4:cout << num1 / num2;; break;
	}
}

int main(void) {

	int ch;
	cout << "MENU:\n0 - exit\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\nYour choice ? = ";
	cin >> ch;
	if (ch == 0)
		exit(0);
	else
		f(ch);
	cin >> ch;
	return 0;
}