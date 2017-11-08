#include <iostream>

using namespace std;
int main(void) {
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);	
	int *ptr = NULL;
	ptr = vector;
	int max = -100000;
	while (n-- >= 0)
	{
		if (*ptr > max)
			max = *ptr;
		ptr++;
	}
	cout << max;
	cin >> n;
	return 0;
}