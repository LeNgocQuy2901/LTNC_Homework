#include<bits/stdc++.h>
using namespace std;

string check(int x1, int v1 , int x2, int v2) {
    for (int i=0;i<100000;i++) {
        if ((x1+i*v1)==(x2+i*v2)) return "YES";
    }
    return "NO";
}

int main() {
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    cout << check(x1,v1,x2,v2);
}

