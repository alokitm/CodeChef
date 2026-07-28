// CODECHEF Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/REACH_HOME

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

        // X = speed per unit time
        // Y = distance to Chef's home
        int X, Y;
        cin >> X >> Y;

        // Check whether Chef can cover the required distance
        // within 5 units of time
        if (5 * X >= Y) {

            // Chef can reach home
            cout << "yes" << endl;
        }
        else {

            // Chef cannot reach home
            cout << "no" << endl;
        }
    }

    return 0;
}
