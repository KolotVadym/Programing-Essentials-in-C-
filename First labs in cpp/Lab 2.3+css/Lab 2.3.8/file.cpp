#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	if(num>=0)
	{
	if(num==0)
	cout<<1;
	else
	{
		long ans=1;
		for(int i=1;i<=num;i++)
		{
			ans*=i;
		}
		cout<<ans;
	}
	}
	return 0;
}