#include<bits/stdc++.h>

using namespace std;


int num[]= {9,3,5,7,6,4,8,2};
int ara [8]= {};
void Merge(int L,int Mid, int H)
{
    int i=L, j=Mid+1,k=L;
    while (i<=Mid && j<=H)

    {
        if (num[i],num[j])
        {
            ara[k++]=num[i];
            k++;
            i++;
        }
        else
        {
            ara [k]=num[j];
            k++;
            j++;


        }
    }
    for (; i<=Mid; i++)
    {
        ara [k]=num[i];
        k++;
    }
    for (;
            j<=H;
            j++)
    {
        ara [k]=num[j];
        k++;
    }
    for (int a=L; a<k; a++)
    {
        num [a]=ara[a];
    }

}

void Mergesort(int L,int H)
{
    if(L<H)
    {
        int Mid =(L+H)/2;
        Mergesort(L,Mid);
        Mergesort(Mid+1,H);
        Merge(L,Mid,H);

    }
}
int main()
{
    Mergesort(0,7);
    for (int i=0; i<8; i++)
    {
        cout<<num[i]<<"  ";
    }
    cout<<endl;
}

