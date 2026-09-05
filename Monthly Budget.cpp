// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BUDGET_

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

        // X = total budget available
        // Y = cost of one item
        int X, Y;
        cin >> X >> Y;

        // Check whether the budget is enough to buy 30 items
        if (X >= 30 * Y) {

            // Budget is sufficient
            cout << "YES" << endl;
        }
        else {

            // Budget is not sufficient
            cout << "NO" << endl;
        }
    }

    return 0;
}
