// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CABS

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

        // X = value associated with the first option
        // Y = value associated with the second option
        int X, Y;
        cin >> X >> Y;

        // Compare the two values to determine the winner
        if (X < Y) {

            // First option has the smaller value
            cout << "FIRST" << endl;
        }
        else if (X > Y) {

            // Second option has the smaller value
            cout << "SECOND" << endl;
        }
        else {

            // Both values are equal, so either option can be chosen
            cout << "ANY" << endl;
        }
    }

    return 0;
}
