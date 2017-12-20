#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	float n1,n2,n3,n4,n5;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	cin>>n4;
	cin>>n5;
    cout<<fixed<< setprecision(1)<<n1<<endl;
    cout<<fixed<< setprecision(2)<<n2<<endl;
    cout<<fixed<< setprecision(6)<<n3<<endl;
    cout<<fixed<< setprecision(2)<<n4<<endl;
    cout<<fixed<< setprecision(0)<<n5<<endl;
	return 0;
}