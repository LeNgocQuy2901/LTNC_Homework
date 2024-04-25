#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

vector<int> getFactors(int num) {
    vector<int> factors;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            factors.push_back(i);
        }
    }
    return factors;
}

int getTotalX(vector<int> a, vector<int> b) {
    int max_a = *max_element(a.begin(), a.end());
    int min_b = *min_element(b.begin(), b.end());
    
    int count = 0;
    for (int num = max_a; num <= min_b; ++num) {
        vector<int> factors_of_num = getFactors(num);
        bool satisfies_condition_a = all_of(a.begin(), a.end(), [&](int x) { return num % x == 0; });
        bool satisfies_condition_b = all_of(b.begin(), b.end(), [&](int x) { return x % num == 0; });
        if (satisfies_condition_a && satisfies_condition_b) {
            ++count;
        }
    }
    
    return count;
}

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> arra(a), arrb(b);
    for(int i = 0; i < a; ++i) {
        cin >> arra[i];
    }
    for(int i = 0; i < b; ++i) {
        cin >> arrb[i];
    }
    cout << getTotalX(arra, arrb) << endl;
    return 0;
}

