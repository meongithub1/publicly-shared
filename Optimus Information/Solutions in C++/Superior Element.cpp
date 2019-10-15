#include<iostream>
#include<vector>
using namespace std;

struct Pair
{
    int Number;
    int Count;
};

int main()
{
    int N=0, tmp;
    cin>>N;
    vector<int> Array;
    vector<Pair> Freqs; //Frequencies
    for(int i=0; i<N; i++)
    {
        cin>>tmp;
        Array.push_back(tmp);
    }

    for(int i=0; i<N; i++)
    {
        bool Exists=false;
        for(int j=0; j<Freqs.size(); j++)
        {
            if(Freqs[j].Number==Array[i])
            {
                Exists=true;
                Freqs[j].Count++;
                if(Freqs[j].Count>N/2)
                {
                    cout<<Array[i];
                    return 0;
                }
            }
        }
        if(!Exists)
        {
            Pair p;
            p.Number=Array[i];
            p.Count=1;
            Freqs.push_back(p);
        }
    }

    cout<<"no superior element";
    return 0;
}
