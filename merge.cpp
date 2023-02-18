#include<bits/stdc++.h>

using namespace std;

int m=5, n=4;
int C[9]= {};

void Merge (int A[],int B[])
{
    int i=0,j=0,k=0;

    while (i<m && j<n)
    {
        if (A[i]<B[j])
        {
            C[k]=A[i];
            k++;
            i++;
        }
        else
        {
            C[k]=B[j];
            k++;
            j++;
        }
    }
    for(; i<m; i++)
    {
        C[k]=A[i];
        k++;
    }
    for(; j<n; j++)
    {
        C[k]=B[j];
        k++;
    }
}

int main()
{

    int A[]= {2,5,8,15,16};
    int B[]= {3,4,10,14};

    Merge(A,B);
    for(int i=0;i<9;i++)
    {
        cout<<C[i]<<" ";
    }

    cout<<endl;


}


