#include <iostream>
using namespace std;
int main(void) {
double n,r=1;
cin >> n;
for(long i=0;i<n;i++)
{
r/=2;
}
cout.precision(20);
cout << r << endl;
return 0;
}