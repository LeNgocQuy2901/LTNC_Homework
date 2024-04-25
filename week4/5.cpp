#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr1,arr2;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        arr1.push_back(k);
    }
    for(int i=0;i<=n;i++)
    {
        int h;
        cin>>h;
        arr2.push_back(h);
    }
    sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
    for(int j=0;j<=n;j++){
        if(arr2[j]!=arr1[j])
        {
            cout<<arr2[j];
            break;
        }
    }
    return 0;

}
