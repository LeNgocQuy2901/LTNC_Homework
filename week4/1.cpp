#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int count=1, mx = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + n);
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
        {
            count++;
        }
        else{
            mx = max(mx, count);
            count = 1;
        }
        
    }
    mx = max(mx, count);
    cout<<(n-mx);
}

