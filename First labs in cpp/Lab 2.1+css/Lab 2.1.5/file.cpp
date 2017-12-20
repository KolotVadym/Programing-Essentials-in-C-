#include <iostream>
using namespace std;
int main(void) {
int y,a,b,c,d,e;
cin>>y;
a=y%19;
b=y%4;
c=y%7;
d=(a*19+24)%30;
e=(2*b + 4*c + 6*d + 5)%7;
if((d+e)<10)
cout<<d+e+22<<" March";
else
cout<<d+e-9<<" April";
return 0;
}