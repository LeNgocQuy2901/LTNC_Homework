#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    map<string,int > m;
    while(q--)
    {
        int type;
        cin>>type;
        if(type==1)
        {
        
        string x;
        int y;
        cin>>x>>y;
        m[x]+=y;
        }
        else if (type==2) {
            string x;
            cin>>x;
            m.erase(x);
        
        }
        else
        {
            string x;
            cin >> x;
            if(m.find(x) != m.end()) { 
                cout << m[x] << endl; 
            } else {
                cout << "0" << endl; 
            }
        
        }
    }
    return 0;
}

