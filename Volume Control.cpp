// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/VOLCONTROL

// Time Complexity: O(t)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // Variable to store number of test cases
    int t;
    cin >> t;

    // Process each test case
    while(t--) {

        // x = current volume
        // y = desired volume
        int x, y;
        cin >> x >> y;

        // Minimum button presses required
        // is equal to absolute difference
        cout << abs(x - y) << endl;
    }

    return 0;
}
