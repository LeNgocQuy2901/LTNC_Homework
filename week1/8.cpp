#include <iostream>
#include <vector>

using namespace std;

string balancedSums(vector<int> arr) {
    int totalSum = 0;
    for (int num : arr) {
        totalSum += num;
    }

    int leftSum = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (leftSum == totalSum - leftSum - arr[i]) {
            return "YES";
        }
        leftSum += arr[i];
    }

    return "NO";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << balancedSums(arr) << endl;
    }

    return 0;
}

