#include<bits/stdc++.h>
using namespace std;

int main()
{
    string string1, string2;

    cin >> string1 >> string2;//


    int m = string1.size(), n = string2.size();
    int LCS[m+1][n+1];


    for(int i = 0; i<m+1; i++)
    {
        for(int j = 0; j<n+1; j++)
        {
            if(i == 0 || j==0)
            {
                LCS[i][j] = 0;
            }
            else if(string1[i-1] == string2[j-1])

            {
                LCS[i][j] = 1 + LCS[i-1][j-1];
            }
            else
            {
                LCS[i][j] = max(LCS[i-1][j],LCS[i][j-1]);
            }
        }
    }
    cout << LCS[m][n] << endl;
    return 0;
}


