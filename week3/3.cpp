#include<bits/stdc++.h>
using namespace std;
int main()
{
    string date;
    cin>>date;
    string hour= date.substr(0,2);
    if(hour=="12" && date[8]=='A')
    {
        hour="00";
    }
    
    else if( date[8]=='P')
    {
        int 
        s=stoi(hour);
        s=s+12;
        if(s==24)
        {
            string hour="00";
        }
        else {
                    hour=to_string(s);

        }
      
        
    }
    string str= date.replace(0,2,hour);
    str.erase(str.begin()+8, str.begin()+10);
    cout<<str;
    
    
}

