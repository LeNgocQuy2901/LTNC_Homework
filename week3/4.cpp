#include<bits/stdc++.h>
using namespace std;

int main()
{   string s;
cin>>s;
    int a=1;
    int b=s.length();
    for(int i=0;i<b;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            a++;
        }
    }
    cout<<a;
}


