// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DISCNT

// Time Complexity : O(t)
// Space Complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // Variable to store number of test cases
    int t;
    cin >> t;

    // Loop through all test cases
    while(t--) {

        // Discount percentage
        int x;
        cin >> x;

        // Original price = 100
        // Final price after discount = 100 - x
        cout << 100 - x << endl;
    }

    return 0;
}
