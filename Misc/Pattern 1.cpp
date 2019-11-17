/*


*
* *
* * *
* * *   *
* * *   * *
      *     *
            *
            *


*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[] = {5, 4, 3, -1, 2, 1, -3};
    int n = sizeof(A)/sizeof(A[0]);
    vector<int> Arr;
    for(int i = 0; i<n; i++)
        Arr.push_back(A[i]);

    int max = *max_element(Arr.begin(), Arr.end());
    int min = *min_element(Arr.begin(), Arr.end());

    for(int i = max; i >= min; i--)
    {
        if(i == 0) i--;
        for(int j = 0; j < Arr.size(); j++)
        {
            if(i > 0)
                if(Arr[j] >= i)
                    cout<<"* ";
                else
                    cout<<"  ";

            else if(i < 0)
                if(Arr[j] <= i)
                    cout<<"* ";
                else
                    cout<<"  ";
        }
        cout<<"\n";
    }

    cin.ignore();
    return 0;
}
