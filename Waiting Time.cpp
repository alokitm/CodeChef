// CODECHEF Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/WAITTIME

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

        // K = number of weeks
        // X = number of days already waited
        int K, X;
        cin >> K >> X;

        // Each week has 7 days.
        // Calculate total days and subtract
        // the number of days already waited.
        cout << 7 * K - X << endl;
    }

    return 0;
}
