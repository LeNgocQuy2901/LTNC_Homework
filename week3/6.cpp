#include<bits/stdc++.h>

using namespace std;

string  check(string s, int k)
{
    string memori = "";
    for(char &c:s)
    {
        if(isalpha(c))
        {
            char base = islower(c) ? 'a': 'A';
            memori+= (c-base+k)%26 +base;
            
        }
        else 
        memori+=c;
        
    }
    return memori;
    
}
int main()
{   int n, k;
    cin>>n;
    string s;
    cin>>s;
    cin.ignore();
    cin>>k;
    cout<<check(s,k);
}

