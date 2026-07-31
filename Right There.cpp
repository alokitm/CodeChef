// CODECHEF Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/RIGHTTHERE

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

        // N = required destination distance
        // X = Chef's current position
        int N, X;
        cin >> N >> X;

        // Check whether Chef has reached
        // or crossed the required distance
        if (X >= N) {

            // Chef is already there
            cout << "Yes" << endl;
        }
        else {

            // Chef has not reached yet
            cout << "No" << endl;
        }
    }

    return 0;
}
