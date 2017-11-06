#include <iostream>
using namespace std;
int main()
{
	struct TimeOfDay
	{
		int hours, minutes;
	};
	TimeOfDay variable;
	int event;
	do
	{
		cout << "Enter hour from 0 to 24" << endl;
		cin >> variable.hours;
	} while (variable.hours<0 || variable.hours>24);
	do
	{
		cout << "Enter minute from 0 to 59" << endl;
		cin >> variable.minutes;
	} while (variable.minutes<0 || variable.minutes >= 60);
	cout << "Enter duration of event (in minutes)" << endl;
	cin >> event;

	variable.minutes += event;
	if (variable.minutes >= 60)
	{
		variable.hours += variable.minutes / 60;
		if (variable.hours>23)
		{
			variable.hours %= 24;
		}
		variable.minutes %= 60;
	}

	cout << variable.hours << ":" << variable.minutes << endl;
	cin >> event;
	return 0;
}