#include<iostream>
using namespace std;
int main()
{
    int n=15;

    //Section 1
    int Offset=n, Lines=(n+1)/2;
    for(int i=1; i<=Lines; i++)
    {
        for(int j=1; j<=Offset; j++)
            cout<<" ";
        for(int j=Lines-i; j>=1; j--)
            cout<<" ";

        for(int j=1; j<=2*i-1; j++)
            cout<<"*";
        cout<<"\n";
    }

    //Section 2
    int Spaces=n-2;
    for(int i=1; i<=n-2; i++)
    {
        for(int j=1; j<=Offset; j++)
            cout<<" ";
        cout<<"@";

        for(int j=1; j<=Spaces; j++)
            cout<<" ";

        cout<<"@";
        cout<<"\n";
    }

    //Section 3
    for(int i=Lines; i>=1; i--)
    {
        for(int j=Lines-i; j>=1; j--)
            cout<<" ";

        for(int j=1; j<=2*i-1; j++)
            cout<<"*";

        for(int j=Lines-i; j>=1; j--)
            cout<<" ";

        if(i==Lines)
        {
            cout<<"@";
            for(int j=1; j<=Spaces; j++)
                cout<<" ";
            cout<<"@";
        }
        else
        {
            for(int j=1; j<=n; j++)
                cout<<" ";
        }

        for(int j=Lines-i; j>=1; j--)
            cout<<" ";

        for(int j=1; j<=2*i-1; j++)
            cout<<"*";

        cout<<"\n";
    }

    cin.ignore();
    return 0;
}
