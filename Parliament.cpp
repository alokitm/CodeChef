// CODECHEF Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PARLIAMENT

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

        // N = total number of seats in parliament
        // X = seats won by the party
        int N, X;
        cin >> N >> X;

        // Check whether the party has at least half of the total seats
        if (2 * X >= N) {

            // The party can form the government
            cout << "yes" << endl;
        }
        else {

            // The party cannot form the government
            cout << "no" << endl;
        }
    }

    return 0;
}
