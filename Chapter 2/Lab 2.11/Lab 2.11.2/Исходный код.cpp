#include <iostream>
using namespace std;

int main()
{
	struct StartTime
	{
		int startHour;
		int startMinute;
	};
	struct EndTime
	{
		int endHour;
		int endMinute;
	};
	StartTime stt;
	EndTime ent;
	int diffHour, diffMinute;
	cout << "Enter StartTime" << endl;
	cin >> stt.startHour;
	cin >> stt.startMinute;
	do
	{
		cout << "Enter EndTime" << endl;
		cin >> ent.endHour;
		cin >> ent.endMinute;
	} while (stt.startHour > ent.endHour);

	if (ent.endMinute >= stt.startMinute)
	{
		diffHour = ent.endHour - stt.startHour;
		diffMinute = ent.endMinute - stt.startMinute;
	}
	else
	{
		diffMinute = (60 - stt.startMinute) + ent.endMinute;
		diffHour = ent.endHour - stt.startHour - 1;
	}
	cout << diffHour << ":" << diffMinute << endl;
	cin >> ent.endHour;
	return 0;
}