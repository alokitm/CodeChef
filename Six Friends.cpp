// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SIXFRIENDS

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

        // X = cost of the first option
        // Y = cost of the second option
        int X, Y;
        cin >> X >> Y;

        // Compare the total cost of both options:
        // Option 1 = 3 × X
        // Option 2 = 2 × Y
        // Print the minimum cost
        cout << min(3 * X, 2 * Y) << endl;
    }

    return 0;
}
