// CODECHEF Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FAIRPASS

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

        // N = number of people
        // K = maximum number of people allowed for a fair pass
        int N, K;
        cin >> N >> K;

        // Check whether the number of people is less than the pass limit
        if (N < K) {

            // Eligible for a fair pass
            cout << "yes" << endl;
        }
        else {

            // Not eligible for a fair pass
            cout << "no" << endl;
        }
    }

    return 0;
}
