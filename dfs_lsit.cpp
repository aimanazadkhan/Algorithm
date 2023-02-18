#include <bits/stdc++.h>
using namespace std;
vector<int> graph[30];
int n,e;
int visit[1000];

void DFS(int s)
{
    visit[s] = 1;
    cout << s << " ";

    for(int i = 0; i<graph[s].size(); i++)
    {
        int v = graph[s][i];
        if(visit[v] == 0)
        {
            DFS(v);
            visit[v] = 1;
        }

    }

}
int main()
    {
        {
            int u, v;
            cin >> n >> e;

            for(int i = 1; i<=e; i++)
            {
                cin >> u >> v;
                graph[u].push_back(v);
                graph[v].push_back(u);

            }
            DFS(1);
        }
        return 0;
    }
