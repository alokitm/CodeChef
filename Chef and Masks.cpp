// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CMASKS

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

        // X = cost of one disposable mask
        // Y = cost of one cloth mask
        int X, Y;
        cin >> X >> Y;

        // Cost of using disposable masks for 100 days = 100 * X
        // Cost of using cloth masks for 100 days = 10 * Y
        if (100 * X < 10 * Y) {

            // Disposable masks are cheaper
            cout << "disposable" << endl;
        }
        else {

            // Cloth masks are cheaper or equal in cost
            cout << "cloth" << endl;
        }
    }

    return 0;
}
