#include<bits/stdc++.h>

using namespace std;

int main()
{

    int num[] = {5,8,6,2,7,9};


    /*bubble sort

    for(int i=0; i<6-1; i++)
    {
        for (int j=0; j<6-i-1; j++)
        {
            if(num[j]>num[j+1])
            {
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }


    for(int k=0; k<6; k++)
    {
        cout<<num[k]<<" ";
    }

    cout<<endl;


 **/














    /*selection sort
     for(int i=0;i<6;i++)
     {
       for (int j=i+1;j<6;j++)
       {
           if(num[i]>num[j])
           {
               swap(num[i],num[j]);
           }
       }
     }
    **/

    /*insertion sort
    for(int i=0;i<6;i++)
    {
        int x =num[i];
        int j =i-1;
        while (j>=0 && num[j]>x)
        {
            num[j+1]= num[j];
              j--;
        }
        num [j+1]=x;
    }

    **/

    for(int i=0;i<6;i++)
    {
        cout<<num[i]<<" ";
    }

    cout<<endl;


}
