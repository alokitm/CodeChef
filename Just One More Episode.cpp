// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/ONEMORE

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

        // X = number of hours studied by the student
        int X;
        cin >> X;

        // Check whether the study hours exceed 24
        if (X > 24) {

            // More than 24 hours studied
            cout << "Yes" << endl;
        }
        else {

            // 24 hours or less studied
            cout << "No" << endl;
        }
    }

    return 0;
}
