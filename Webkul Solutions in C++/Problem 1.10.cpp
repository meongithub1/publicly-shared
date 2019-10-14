#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any odd number: ";
    cin>>n;
    cout<<"\n";
    if(n<=1||n%2==0)
        return 0;

    //First half
    int Offset=n/2, Spaces=0;
    for(int i=n; i>=1; i-=2)
    {
        for(int j=1; j<=Offset; j++)
            cout<<" ";

        for(int j=1; j<=Spaces; j++)
            cout<<" ";
        Spaces++;

        for(int j=1; j<=i; j++)
            cout<<"@";

        cout<<"\n";
    }

    //Second Half
    for(int i=1; i<=n; i++)
        cout<<"*";

    cout<<"\n";
    for(int i=1; i<=n-1; i++)
    {
        for(int j=1; j<=n; j++)
            if(j==1||j==n)
                cout<<"*";
            else
                cout<<" ";

        cout<<"\n";
    }

    cin.ignore(2);
    return 0;
}
