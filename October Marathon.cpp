// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/WAITTIME

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

        // K = total waiting period in weeks
        // X = number of days already waited
        int K, X;
        cin >> K >> X;

        // Total waiting days = 7 × K
        // Remaining waiting days = total waiting days - days already waited
        cout << 7 * K - X << endl;
    }

    return 0;
}
