#include <iostream>
using namespace std;

int main()
{
	int money[5] = { 50, 20, 10, 5, 1 };
	int summ;
	cin >> summ;
		for (int i = 0; i < 5; i++)
		{
			while (summ >= money[i])
				{
					summ -= money[i];
					cout << money[i] << " ";
			    }
		}
	cin >> summ;
	return 0;
}