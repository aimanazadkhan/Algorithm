#include<bits/stdc++.h>
using namespace std;
int main()
{



    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int List1[n],LIS[n];

        for(int i = 0; i<n; i++)
        {
            cin>>List1[i];
            LIS[i] = 1;
        }

        for(int i = 1; i<n; i++)

        {
            for(int j = 0; j<i; j++)
            {
                if(List1[j]<List1[i])
                {
                    LIS[i] = max(LIS[i],1+LIS[j]);
                }
            }
        }

        int mx = INT_MIN;
        for(int i = 0; i<n; i++)
        {
            if(mx<LIS[i])
            {
                mx = LIS[i];
            }
        }
        cout << mx << endl;
    }


    return 0;
}
