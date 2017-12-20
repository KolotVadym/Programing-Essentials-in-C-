#include <iostream>
using namespace std;
int main()
{
    int i, j, rows;
    cin>>rows;
    if(rows<3||rows>8)
        cout<<"You entered wrond number\n";
        else
        {
    for(i=1; i<=rows; i++)
    {
        for(j=i; j<rows; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=(2*i-1); j++)
        {
            if(i==rows || j==1 || j==(2*i-1))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
        }

    return 0;
}