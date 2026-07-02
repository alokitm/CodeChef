// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DOREWARD

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

        // X = rank obtained by the participant
        int X;
        cin >> X;

        // Determine the reward based on rank
        if (X <= 3) {

            // Top 3 ranks receive Bronze reward
            cout << "bronze" << endl;
        }
        else if (X <= 6) {

            // Ranks 4 to 6 receive Silver reward
            cout << "silver" << endl;
        }
        else {

            // All remaining ranks receive Gold reward
            cout << "gold" << endl;
        }
    }

    return 0;
}
