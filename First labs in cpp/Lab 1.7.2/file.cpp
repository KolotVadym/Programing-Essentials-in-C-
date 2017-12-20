#include <iostream>
using namespace std;

int main() {
	int n1,n2;
	cin>>n1;
	cin>>n2;
	bool div =(1/(float)n1==1/(float)n2);
    cout << (div ? "Results are equal" : "Results are not equal");
	return 0;
}