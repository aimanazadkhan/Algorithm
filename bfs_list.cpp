#include<bits/stdc++.h>
using namespace std;
vector <int>graph[30];
int visit[1000];
int n,e;

void BFS(int s)//source hisabe pailam//intial step
{
    queue<int>Q;//BFS queue te source ta patailam
    visit[s] = 1;//jetake ami visit a pataisi er 2 ta step thake initial step repeating step//intial step re source hisabe jani jeta
    cout << s << " ";//eita dekar jonno j ami ka k  traverse korsi
    Q.push(s);//eita ami queue er moddhe push kore dibo


    while(!Q.empty())//jotokkhon porjonto queue ta empty hocche tottokkhon porjonto amar loop ta cholbe//repeating step
    {
        int u = Q.front();//adj list row te tar sathe connected node gula k push ore disilam
        Q.pop();// erpor oi queue k empty kore dilam

        for(int i = 0; i<graph[u].size(); i++)
        {
            int v = graph[u][i];//graph er surur element k v namer variable a raklam
            //v te kun node ta connected mane connected node tai v er moddhe ase


            if(visit[v] == 0)// ekta loop chalabo ebong check korbo j amr visit of i == 0 hoy
                // ebong u theke i er moddhe jodi kuno edge thake
            {
                visit[v] = 1;//jei i er jonno s ta paisi oi i er visit ta k o ami 1 kore dibo
                cout <<v << " ";// oi i ta k jehetu visit kore felsi print kore dibo
                Q.push(v);//ebong queue te push korbo
            }
        }
    }

}
int main()
{
    cin >> n >> e;//node 10 node e

    int u, v;//kun node er sathe kun node connected amra u ar v name 2 ta variable dia choose korlam

    for(int i = 0; i<e; i++)//prothome 1 ta node select kori tar por tar adjacent sob gula node visit kori oi adjacent node gular porer node gula k ei bhabe jai arki
        // tar mane ekta k visit korar por take fully explore korte hoy
    {
        cin >> u >> v;//ei input ta dui bhabe nite pari adj matrix dia abar adj list dia

        graph[u].push_back(v);
        graph[v].push_back(u);

    }
    BFS(1);

    for(int i=1; i<=n;i++)
    {
        if(visit[i] == 0)//prothom bar 1 er jonno zero
            //prothom bar 1 dia call dewar pore full graph ta jodi connected hoy mane prottek ta node er sathe prottek ta jodi connected thake
            //tahole prothom bar 1 er jonnoi sob gula visit 1 hoye jabe
            //jodi graph er moddhe isolated man thake tahole BFS ta 2 bar call hobe tokon deka jabe i er arekta man er jonno visit i tokono zero roye jabe
            // eita dia amra eita o bujte pari graph connected ki na
        {
            BFS(i);
        }
    }

    return 0;
}

