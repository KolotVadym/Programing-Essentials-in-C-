#include <iostream>
using namespace std;
int main(void) {
int c0,count;
cin>>c0;
while(c0!=1)
{
if(!(c0%2))
c0/=2;
else
c0=3*c0+1;
count++;
cout<<c0<<endl;
}
cout<<"steps = "<<count;
return 0;
}