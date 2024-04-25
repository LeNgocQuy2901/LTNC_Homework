#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=(a-i);j++)
        {
            cout<<" ";
        }
        for(int k=(a-i-1);k<=a-2;k++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
}

