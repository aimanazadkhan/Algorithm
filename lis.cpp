#include<bits/stdc++.h>
using namespace std;
int main()
{
    //LIS Length

    int n;
    cin >> n;

    int List1[n],LIS[n];

    for(int i = 0; i<n; i++)
    {
        cin>>List1[i];
        LIS[i] = 1;//Lis er prottek ta index k 1nitialize  kortam 1 dia
    }

    for(int i = 1; i<n; i++)//i er man 0 theke suru hobe na karon 0 tomo idex a j thake

    {
        for(int j = 0; j<i; j++)//j er man zero theke suru hoy ebong j er man i porjonto cholbe
        {
            if(List1[j]<List1[i])
            {
                LIS[i] = max(LIS[i],1+LIS[j]);
            }
        }
    }

    for(int i = 0; i<n; i++)
    {
        cout << LIS[i] << " ";
    }
    cout<< endl;

    int mx = INT_MIN;
    for(int i = 0; i<n; i++)
    {
        if(mx<LIS[i])
        {
            mx = LIS[i];
        }
    }
    cout<< "LIS Length: " << mx << endl;

    return 0;
}
