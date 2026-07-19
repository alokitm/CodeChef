// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MINCOINSREQ

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

        // X = given amount
        int X;
        cin >> X;

        // Minimum number of 1-value coins required
        // after using the maximum possible 10-value coins
        cout << X % 10 << endl;
    }

    return 0;
}
