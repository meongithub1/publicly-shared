/*
  INPUT:  
  4
  
  OUTPUT:
  
  ABCDCBA
   BCDCB
    CDC
     D
*/

#include<iostream>
using namespace std;

int main()
{
    int n, Spaces=0;
    cout<<"N: ";
    cin>>n;
    for(char i='A'; i<'A'+n; i++)
    {
        for(int j=1; j<=Spaces; j++)
            cout<<' ';
        Spaces++;
        for(char j=i; j<'A'+n; j++)
            cout<<j;
        for(char j='A'+n-2; j>=i; j--)
            cout<<j;
        cout<<'\n';
    }
    cin.ignore(2);
    return 0;
}
