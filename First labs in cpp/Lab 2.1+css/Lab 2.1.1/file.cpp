#include <iostream>
using namespace std;
int main(void) {
int year;
cout << "Enter a year: ";
cin >> year;
bool flag;
if(year%4!=0)
flag=true;
else if(year%100!=0)
flag=false;
else if(year%400!=0)
flag=true;
else
flag=false;
cout<<(flag?"Common year":"Leap year");
return 0;
}