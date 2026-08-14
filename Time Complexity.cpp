// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/COMPLEXITY

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

        // X = old complexity
        // Y = new complexity
        int X, Y;
        cin >> X >> Y;

        // Check whether the old complexity is greater
        // than the new complexity
        if (X > Y) {

            // Complexity has improved
            cout << "yes" << endl;
        }
        else {

            // Complexity has not improved
            cout << "no" << endl;
        }
    }

    return 0;
}
