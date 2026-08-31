// CODECHEF Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SLEEP

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

        // X = number of sleeping hours
        int X;
        cin >> X;

        // Check whether the sleeping hours
        // are less than the recommended 7 hours
        if (X < 7) {

            // Sleep is insufficient
            cout << "yes" << endl;
        }
        else {

            // Sleep is sufficient
            cout << "no" << endl;
        }
    }

    return 0;
}
