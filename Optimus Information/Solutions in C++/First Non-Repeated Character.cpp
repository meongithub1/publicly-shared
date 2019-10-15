
#include<iostream>
#include<string>
using namespace std;

int GetNRCharIndex(string Str)
{
    int i, j;
    for(i=0; i<Str.length(); i++)
    {
        for(j=0; j<Str.length(); j++)
        {
            if(Str[j]==Str[i]&&i!=j)
                break;
        }
        if(j>=Str.length())
            return i;
    }
    return -1;
}

int main()
{
    int T=0;
    cin>>T;
    int Index=0;
    for(int C=1; C<=T; C++)
    {
        string String;
        cin>>String;
        Index=GetNRCharIndex(String);
        if(Index>=0)
            cout<<String[Index]<<"\n";
        else
            cout<<-1;
    }
    return 0;
}
