// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/RAINFALL1

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

        // X = rainfall amount
        int X;
        cin >> X;

        // Classify the rainfall based on its intensity
        if (X < 3) {

            // Rainfall is light
            cout << "light" << endl;
        }
        else if (X < 7) {

            // Rainfall is moderate
            cout << "moderate" << endl;
        }
        else {

            // Rainfall is heavy
            cout << "heavy" << endl;
        }
    }

    return 0;
}
