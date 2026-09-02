// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BROKENPHONE

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

        // X = cost of repairing the phone
        // Y = cost of buying a new phone
        int X, Y;
        cin >> X >> Y;

        // Compare the repair cost with the new phone cost
        if (X < Y) {

            // Repairing the phone is cheaper
            cout << "REPAIR" << endl;
        }
        else if (Y < X) {

            // Buying a new phone is cheaper
            cout << "NEW PHONE" << endl;
        }
        else {

            // Both options have the same cost
            cout << "ANY" << endl;
        }
    }

    return 0;
}
