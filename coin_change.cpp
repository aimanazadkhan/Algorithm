#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Coin Change

    int n, m; //here n = types of coin and amount is m
    cin >> n>> m;

    int coin[n];//here n type coin not numbers of coin because number of coin is infinite that's why it called unbounded knepsack

    for(int i = 1; i<=n; i++)
    {
        cin >> coin[i];
    }

    int coins[n+1][m+1]; // this is an coins type 2d table// column anujai amount thake ar row te types of coin

     for(int i = 0; i<n+1; i++)
     {
         for(int j = 0; j<m+1; j++)
         {
             if(i==0 && j== 0 || j == 0)
             {
                 coins[i][j] = 0;
             }

             //extra mone rakar jonno min( prothome ami check korbo amount k jodi paye jai tahole joto coin lagbe tar theke oi coin minus kore oi ghore jabo ebon oi ghorer uporer coin ar +1 jug kora coin er moddhe minimum ta nibo

             else if(i==0)
             {
                 coins[i][j] = INT_MAX;

             }
             else if(j>=coin[i])
             {
                 coins[i][j] = min(coins[i-1][j],1+coins[i][j-coin[i]]);
             }
             else
             {
                 coins[i][j] = coins[i-1][j];
             }



         }
     }

     for(int i = 0; i<n+1;i++)
     {
         for(int j =0; j<m+1;j++)
         {
             cout << coins[i][j] << " ";
         }
         cout << endl;
     }

    cout << "\nMinimum  No.of Coins are: " << coins[n][m] << endl;
    return 0;
}
