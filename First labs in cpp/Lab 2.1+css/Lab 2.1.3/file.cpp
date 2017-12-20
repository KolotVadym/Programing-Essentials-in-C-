#include <iostream>
using namespace std;
int main(void) {
int sys;
float m, ft, in;
cout<<"0-метрична, 1-≥мперська"<<endl;
cin>>sys;
if(sys==0)
{
	cout<<"¬вед≥ть метри"<<endl;
	cin>>m;
	m*=39.37;
	cout<<(int)m/12<<"\'"<<m-((int)m/12)*12<<"\""<<endl;
}
else
{
	cout<<"¬вед≥ть фути ≥ дюйми"<<endl;
	cin>>ft;
	cin>>in;
	cout<<(ft*12+in)/39.37<<"m";
}
return 0;
}