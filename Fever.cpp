// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FEVER

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

        // X = body temperature
        int X;
        cin >> X;

        // Check whether the temperature indicates fever
        if (X > 98) {

            // Temperature is above normal
            cout << "yes" << endl;
        }
        else {

            // Temperature is normal
            cout << "no" << endl;
        }
    }

    return 0;
}
