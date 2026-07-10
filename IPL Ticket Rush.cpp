// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/IPLTRSH

// Time Complexity: O(T)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // T = number of test cases
    int T;
    cin >> T;

    // Process each test case
    while (T--) {

        // N = total storage capacity
        // M = storage already used
        int N, M;
        cin >> N >> M;

        // Calculate remaining storage space
        if (N - M <= 0) {

            // No storage space left
            cout << 0 << endl;
        }
        else {

            // Print available storage space
            cout << N - M << endl;
        }
    }

    return 0;
}
