// CodeChef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/JERRYCHASE

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

        // X = speed of Tom
        // Y = speed of Jerry
        int X, Y;
        cin >> X >> Y;

        // Check whether Jerry is faster than Tom
        if (Y > X) {

            // Jerry can catch/escape as per the condition
            cout << "Yes" << endl;
        }
        else {

            // Jerry is not faster than Tom
            cout << "No" << endl;
        }
    }

    return 0;
}
