#include <iostream>
using namespace std;
int main(void) {
	int n;
	cin>>n;
	if(n<=1)
	cout<<"You entered wrong digit";
	else if(n>=100)
	cout<<"Sorry, the side size is too big";
	else
	{
cout << '+';
for(int i = 0; i < n; i++)
cout << '-';
cout << '+' << endl;
for(int i = 0; i < n; i++) {
cout << '|';
for(int j = 0; j < n; j++)
cout << ' ';
cout << '|' << endl;
}
cout << '+';
for(int i = 0; i < n; i++)
cout << '-';
cout << '+' << endl;
}
return 0;
}