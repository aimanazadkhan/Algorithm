#include<bits/stdc++.h>

using namespace std;

long long fib(int n)

{
    long long F[100000];
     F[0]=0,F[1]=1;
     for (int i=2;i<=n;i++)
     {
         F[i]=F[i-1]+F[i-2];

     }
     return F[n];
}

int main()

{
    int n;
    cin>>n;
    long long nfib =fib(n);

    cout<<nfib<<endl;
    return 0;
}
