// CODECHEF Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TOP10

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

        // X = rank obtained
        int X;
        cin >> X;

        // Check whether the rank is within the Top 10
        if (1 <= X && X <= 10) {

            // Rank is in the Top 10
            cout << "Yes" << endl;
        }
        else {

            // Rank is outside the Top 10
            cout << "No" << endl;
        }
    }

    return 0;
}
