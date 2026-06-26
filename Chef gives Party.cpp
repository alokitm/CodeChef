// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PARTY2

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

        // N = number of friends
        // X = cost per person
        // K = total budget available
        int N, X, K;
        cin >> N >> X >> K;

        // Total amount required = N × X
        if (K >= N * X) {

            // Budget is sufficient for the party
            cout << "yes" << endl;
        }
        else {

            // Budget is not sufficient for the party
            cout << "no" << endl;
        }
    }

    return 0;
}
