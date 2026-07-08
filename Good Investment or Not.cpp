// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/LTIME

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

        // X = contest rank
        int X;
        cin >> X;

        // Check whether the rank lies between 1 and 4 (inclusive)
        if (X >= 1 && X <= 4) {

            // Eligible for LTIME
            cout << "yes" << endl;
        }
        else {

            // Not eligible for LTIME
            cout << "No" << endl;
        }
    }

    return 0;
}
