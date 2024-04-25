#include <bits/stdc++.h>
using namespace std;
void findDight(string s)
{
    int cnt=0;
   int  n=stoi(s);
   for (int i=0;i<s.size();i++) {
       if (s[i]!='0'&&n%(s[i]-'0')==0) {
           cnt++;
       }
   }
    cout << cnt << endl;
}
int main()
{
    int n;
    cin>>n;
    while(n--) {
        string s;
        cin >> s;
        findDight(s);
    }
    
  
}

