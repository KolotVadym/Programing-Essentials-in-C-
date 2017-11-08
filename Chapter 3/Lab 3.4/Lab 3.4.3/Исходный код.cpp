#include <iostream>
using namespace std;
struct Date {
	int year;
	int month;
	int day;
};
bool isLeap(int year){
	if (year % 4 == 0)
		return true;
	else
		return false;
}
int monthLength(int year, int month)
{
	int monthVector[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (isLeap(year))
	{
		monthVector[1] = 29;
		return monthVector[month - 1];
	}
	else
		return monthVector[month - 1];
}
int dayOfYear(Date date)
{
	int lenght = 0;
	for (int i = 1; i <date.month; i++)
	{
		lenght += monthLength(date.year, i);
	}
	lenght += date.day;
	return lenght;

}
int main(void)
{
	Date d;
	cout << "Enter year month day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	return 0;
}