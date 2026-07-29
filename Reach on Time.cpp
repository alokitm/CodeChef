// CODECHEF Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TIMELY

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

        // X = time available (in minutes)
        int X;
        cin >> X;

        // Check whether the available time is at least 30 minutes
        if (X >= 30) {

            // Sufficient time available
            cout << "Yes" << endl;
        }
        else {

            // Insufficient time available
            cout << "No" << endl;
        }
    }

    return 0;
}
