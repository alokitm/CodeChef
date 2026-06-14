// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FLOW002

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

        // a = dividend
        // b = divisor
        int a, b;
        cin >> a >> b;

        // Print remainder when a is divided by b
        cout << a % b << endl;
    }

    return 0;
}
