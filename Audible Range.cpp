// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AUDIBLE

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

        // X = frequency in Hertz (Hz)
        int X;
        cin >> X;

        // Check whether the frequency lies in the audible range
        // Audible range: 67 Hz to 45000 Hz (inclusive)
        if (X >= 67 && X <= 45000) {

            // Frequency is audible
            cout << "Yes" << endl;
        }
        else {

            // Frequency is not audible
            cout << "No" << endl;
        }
    }

    return 0;
}
