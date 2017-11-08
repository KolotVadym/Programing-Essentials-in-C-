#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool IsPresent(int balls[], int val, int ballscount)
{
	for (int i = 0; i < ballscount; i++)
	{
		if (balls[i] == val)
			return true;
	}
	return false;
}
int main(void) {

	int max, ballsno, num, *ballsmachine;

	cout << "Max ball number? ";
	cin >> max;
	cout << "How many balls? ";
	cin >> ballsno;
	srand(time(NULL));
	ballsmachine = new int[ballsno];

	for (int i = 0; i < ballsno; i++)
	{
		int rnd = rand() % max + 1;
		if (IsPresent(ballsmachine, rnd, ballsno))
		{
			i--;
			continue;
		}
		ballsmachine[i] = rnd;
	}

	for (int i = 0; i < ballsno; i++)
	{
		cout << ballsmachine[i] << ' ';
	}
	cout << endl;

	return 0;
}