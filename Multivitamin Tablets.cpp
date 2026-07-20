// CODECHEF Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TABLETS

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

        // X = required number of tablets
        // Y = available number of tablets
        int X, Y;
        cin >> X >> Y;

        // Check if the available tablets are at least
        // three times the required tablets
        if (Y >= 3 * X) {

            // Sufficient tablets are available
            cout << "yes" << endl;
        }
        else {

            // Tablets are not sufficient
            cout << "no" << endl;
        }
    }

    return 0;
}
