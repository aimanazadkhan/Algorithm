
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string string1, string2;
    getline(cin, string1);
    getline(cin, string2);


//    cout << string1 << endl;
//    cout << string2 << endl;
    int m = string1.size(); //column er age amr j string ta k change korte hobe ta holo string1,
    int n = string2.size(); // n hoilo amra jeta row te raki ba j string a porobortito korte hobe
    string1 = '\0'+ string1;
    string2 = '\0' +string2;
    int edit_distance [n+1] [m+1];

    for(int i = 0; i<n+1; i++)
    {
        for(int j = 0; j<m+1; j++)
        {
            //jokon empty string hoy i er man 0 hoy ba somthing like this prottek ta jaygay i er man 1 hole 1 zero hole zero
            // mane j er man jokon zero ei khane j value gula bosbe sob i er man

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

    for(int i=0; i< n+1; i++)
    {
        for(int j = 0; j<m+1; j++)
        {
            cout<< edit_distance[i][j]<<" ";
        }
        cout<< endl;
    }

    cout << "\nMinimum Edit Distance: " << edit_distance[n][m] << endl;

    int i = n, j = m;

    while(i>0 && j>0)//nicher theke uporer dike ute ute ekdom jokon zero te chole asbe tokon jeno na chole mane zero te na asa porjonto loop ta cholbe
    {
        //ekon check korte hobe string1 er j ebon string 2 er i er mil ase ki na

        if(string1[j] == string2[i])//j hocche column ar i hocche row
        {
            // 2 ta jodi soman hoy kuno oparation oi hocche na i bong j diagonally move kortese
            i--;
            j--;
        }
        else
        {
           //mane 2 ta soman na ei khane 3 ta oparation hote pare replace, delete, insert
            if(edit_distance[i][j]-1 == edit_distance[i-1][j-1])
            {
                cout << "\nReplace Operation : " << string1[j] <<  " --> "<< string2[i] << endl;//replace hoia string1 er j ta string 2 er i hoye gese
                i--;
                j--;

                //jehetu eita diagonally move korese sehetu amar j keo -- ebong i k o -- korte hobe

            }
            else if(edit_distance[i][j]-1 == edit_distance[i][j-1])
            {
                cout << "\nDelete Operation: "<<string1[j] << " is deleted." << endl;
                //jodi left a move kore amr j ta keo -- korte hobe karon amr ekta column bam dike sorse
                j--;
            }
            else
            {
                cout << "Insert Operation: " << string2[i] << " is inserted. " <<endl;
                i--; //mane jokon upper a move korse amr i k -- korte hobe karon i ta ek row upore utse
            }
        }
    }



    return 0;
}
