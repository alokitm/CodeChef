// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHEFONDATE

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

        // X = amount of money Chef has
        // Y = amount required for the date
        int X, Y;
        cin >> X >> Y;

        // Check whether Chef has enough money
        if (X >= Y) {

            // Chef can afford the date
            cout << "Yes" << endl;
        }
        else {

            // Chef cannot afford the date
            cout << "No" << endl;
        }
    }

    return 0;
}
