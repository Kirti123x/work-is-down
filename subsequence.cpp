#include<bits/stdc++.h>
using namespace std;

void printSubseq(const vector<int>& arr) {
    int n = arr.size();
    int totalSubsequences = 1 << n;

    for (int i = 0; i < totalSubsequences; i++) {
        cout << "{ ";
        for (int j = 0; j < n; j++) {
           ''
            if (i & (1 << j)) {
                cout << arr[j] << " ";
            }
        }
        cout << "}\n";
    }
}

int main() {
    vector<int> arr = {1, 2, 3};

    cout << "Subsequences of the array:\n";
    printSubseq(arr);

    return 0;
}