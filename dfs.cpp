#include<bits/stdc++.h>
using namespace std;
int adj[1000][1000];
int visit[1000];
int n, e;
void DFS(int s)
{
    visit[s] = 1;
    cout <<s<<" ";

    for(int i = 1; i<=n; i++)
    {
        if(visit[i] == 0 && adj[s][i] == 1)
        {
            DFS(i);
            visit[i] = 1;
        }
    }
}

int main()
{
    cin >> n >> e;
    int u, v;

    for(int i = 1; i <= e; i++)
    {
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }


    for(int i = 1; i<=n; i++)
    {
        if(visit[i] == 0)
        {
            DFS(i);
        }
    }

    return 0;
}
