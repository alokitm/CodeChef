// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MINHEIGHT

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

        // X = current height
        // H = minimum required height
        int X, H;
        cin >> X >> H;

        // Check whether the current height
        // meets the minimum height requirement
        if (X >= H) {

            // Height requirement is satisfied
            cout << "Yes" << endl;
        }
        else {

            // Height requirement is not satisfied
            cout << "No" << endl;
        }
    }

    return 0;
}
