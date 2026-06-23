// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHAIRS_

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

        // X = total chairs required
        // Y = chairs already available
        int X, Y;
        cin >> X >> Y;

        // Calculate additional chairs needed
        if (X - Y > 0) {

            // More chairs are required
            cout << X - Y << endl;
        }
        else {

            // Available chairs are sufficient
            cout << 0 << endl;
        }
    }

    return 0;
}
