#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    cin >> m;
    vector<int> u(m);
    for(int i = 0; i < m; ++i) {
        cin >> u[i];
    }
    for(int i=0;i<m;i++)
    {
        auto it=lower_bound(v.begin(),v.end(),u[i]);
        if(it!=v.end()&& *it ==u[i])
        
        {
            cout<<"Yes"<<" "<<it-v.begin()+1<<endl;
        }
        else 
        {
            cout<<"No"<<" "<<it-v.begin()+1<<endl;
        }
    }
    return 0;
}

