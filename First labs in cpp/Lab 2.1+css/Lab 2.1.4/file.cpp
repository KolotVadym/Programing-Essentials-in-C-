#include <iostream>
using namespace std;
int main(void) {
int y,m,d;
cin>>y;
cin>>m;
cin>>d;
if(y>=1900&&y<=2100&&m>=1&&m<=12&&d>=1&&d<=31)
{
	if((m-=2)<0)
	{
	m+=12;
	y--;
	}
	m=m*83/32;
	m+=d;
	m+=y;
	m+=y/4;
	m-=y/100;
	m+=y/400;
	cout<<m%7;
}

return 0;
}