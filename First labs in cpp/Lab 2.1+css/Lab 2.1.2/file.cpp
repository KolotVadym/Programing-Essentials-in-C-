#include <iostream>
using namespace std;
int main(void) {
float grossprice, taxrate, netprice, taxvalue;
cout << "Enter a gross price: "<< endl;
cin >> grossprice;
cout << "Enter a tax rate: "<< endl;
cin >> taxrate;
netprice =grossprice/(taxrate/100+1);
taxvalue=grossprice-netprice;

cout << "Net price: " << netprice << endl;
cout << "Tax value: " << taxvalue << endl;
return 0;
}