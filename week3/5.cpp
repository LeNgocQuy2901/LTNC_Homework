#include<bits/stdc++.h>
using namespace std;
string check(string s)
{   string target="hackerrank";
    int c_str=0,c_s=0;
    while (c_str< s.length()&& c_s<target.length() )
    {
        if(s[c_str]==target[c_s])
        {
            c_s++;
        }
        c_str++;
        
    }
    if(c_s==target.length())
    {
        return "YES";
    }
    else  {
        return  "NO";
    
    }
}
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        string s;
        cin>>s;
        check(s);
        cout<<check(s)<<endl;
    }
}



