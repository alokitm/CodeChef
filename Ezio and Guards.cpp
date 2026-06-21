// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MANIPULATE

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

        // X = current value
        // Y = target value
        int X, Y;
        cin >> X >> Y;

        // Check if Y can be obtained from X
        if (Y <= X) {

            // Manipulation is possible
            cout << "yes" << endl;
        }
        else {

            // Manipulation is not possible
            cout << "no" << endl;
        }
    }

    return 0;
}
