// CODECHEF Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/READPAGES

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

        // N = total number of pages
        // X = pages read per day
        // Y = number of days available
        int N, X, Y;
        cin >> N >> X >> Y;

        // Calculate the maximum number of pages that can be read
        // and check whether all pages can be completed
        if (N <= X * Y) {

            // All pages can be read
            cout << "yes" << endl;
        }
        else {

            // All pages cannot be read
            cout << "no" << endl;
        }
    }

    return 0;
}
