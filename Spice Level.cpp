// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/KITCHENSPICE

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

        // X = spice level
        int X;
        cin >> X;

        // Categorize the spice level
        if (X < 4) {

            // Spice level below 4 is mild
            cout << "mild" << endl;
        }
        else if (X < 7) {

            // Spice level from 4 to 6 is medium
            cout << "medium" << endl;
        }
        else {

            // Spice level 7 or above is hot
            cout << "hot" << endl;
        }
    }

    return 0;
}
