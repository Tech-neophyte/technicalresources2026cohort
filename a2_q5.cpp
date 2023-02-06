#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int spc,str,i;
    spc= n/2;
    str=1;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=spc;j++)
        {
            cout<<"\t";
        }
        for(int j=1;j<=str;j++)
        {
            cout<<"*\t";

        }
        if (i<=n/2)
        {
            str+=2;
            spc--;
        }
        else
        {
            spc++;
            str-=2;
        }
        cout<<"\n";
    }
return 0;
}
