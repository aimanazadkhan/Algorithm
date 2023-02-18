#include<bits/stdc++.h>
using namespace std;

int main()
{
    //0-1 knapsack

    int n, m;
    cin >> n >> m;

    int profit[n], weight[n];

    for(int i = 0; i<n; i++)
    {
        cin >> profit[i];
    }

    for(int i = 0; i<n; i++)
    {
        cin >> weight[i];
    }

    int V[n+1][m+1];

    for(int i = 0; i<n+1; i++)
    {
        for(int w = 0; w < m+1; w++)
        {
            if(i==0 || w==0)
            {
                V[i][w] = 0;

            }
            else if(w>=weight[i-1])
            {
                V[i][w] = max(V[i-1][w],V[i-1][w-weight[i-1]] + profit[i-1]);
            }
            else{
                V[i][w] =  V[i-1][w];
            }
        }
    }


    for(int i = 0; i< n+1; i++)
    {
        for(int w = 0; w<m+1; w++)
        {
            cout << V[i][w] << " ";
        }
        cout << endl;
    }

    return 0;
}


