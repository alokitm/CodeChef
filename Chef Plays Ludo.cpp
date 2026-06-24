// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/LUDO

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

        // X = number obtained on the dice
        int X;
        cin >> X;

        // A player can move only if the dice shows 6
        if (X == 6) {

            // Move is allowed
            cout << "Yes" << endl;
        }
        else {

            // Move is not allowed
            cout << "No" << endl;
        }
    }

    return 0;
}
