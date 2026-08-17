// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PRIZEPOOL

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

        // X = number of prizes worth 10 each
        // Y = number of prizes worth 90 each
        int X, Y;
        cin >> X >> Y;

        // Calculate the total prize pool
        // X prizes × 10 + Y prizes × 90
        cout << 10 * X + 90 * Y << endl;
    }

    return 0;
}
