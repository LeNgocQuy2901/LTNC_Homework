#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
        int countam=0,countduong=0,count0=0;

    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
{
    if(a[i]<0)
    {
        countam++;
    }
    else if(a[i]>0)
    {
        countduong++;
    }
    else 
    count0++;
}
double t=countduong+countam+count0;
cout<<countduong/t<<endl<<countam/t<<endl<<count0/t;
}

