#include <iostream>
using namespace std;
int main(void) {
double pi4 = 0.;
long n;
cin >> n;
for(long i=1;i<=n;i++)
{
	if(i%2)
	{
	pi4+=1./(2*i-1);
	}
	else
	{
	pi4-=1./(2*i-1);
	}
}
cout.precision(20);
cout << "Pi = " << (pi4 * 4.) << endl;
return 0;
}