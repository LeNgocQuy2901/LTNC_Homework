#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string s) {
    int len = s.length();
    int left = 0, right = len - 1; 
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++; 
        right--;
    }
    return true;
}

int palindrome(string s) {
    if (ispalindrome(s)) {
        return -1; // Return -1 as an integer, not as a string
    }
    int len = s.length();
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            if (ispalindrome(s.substr(0, i) + s.substr(i + 1))) {
                return i;
            } else {
                return len - 1 - i;
            }
        }
    }
    return -1;
}

int main() {
    int a;
    cin >> a;
    cin.ignore();
    for (int i = 0; i < a; i++) {
        string s;
        getline(cin, s);
        int b = palindrome(s);
        cout << b << endl;
    }
    return 0;
}

