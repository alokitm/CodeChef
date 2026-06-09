// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FBC

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

        // k = total budget
        // x = amount already spent
        int k, x;
        cin >> k >> x;

        // Remaining amount after spending
        cout << k - x << endl;
    }

    return 0;
}
