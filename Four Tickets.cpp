// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FOURTICKETS

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

        // X = cost of one ticket
        int X;
        cin >> X;

        // Total cost of 4 tickets = 4 × X
        // Check if it is within the budget of 1000
        if (4 * X <= 1000) {

            // Tickets can be purchased within budget
            cout << "Yes" << endl;
        }
        else {

            // Budget is insufficient
            cout << "No" << endl;
        }
    }

    return 0;
}
