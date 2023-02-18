#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        string string1, string2;
        cin>> string1>>string2;



        int m = string1.size();
        int n = string2.size();
        string1 = '\0'+ string1;
        string2 = '\0' +string2;

        int edit_distance [n+1] [m+1

        for(int i = 0; i<n+1; i++)
        {
            for(int j = 0; j<m+1; j++)
            {

                if(j==0)
                {
                    edit_distance[i][j] = i;
                }
                else if (i==0)
                {
                    edit_distance[i][j]=j;
                }
                else if(string1[j]==string2[i])
                {
                    edit_distance[i][j] = edit_distance[i-1][j-1];

                }
                else
                {
                    int mn = min(edit_distance[i-1][j],edit_distance[i][j-1]);
                    edit_distance[i][j] = 1 + min(mn, edit_distance[i-1][j-1]);

                }
            }
        }




        cout << edit_distance[n][m] << endl;

    }





    return 0;
}
