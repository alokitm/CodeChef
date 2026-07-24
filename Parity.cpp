// CODECHEF Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PAR2

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

        // N = given number
        int N;
        cin >> N;

        // Check whether N is even
        if (N % 2 == 0) {

            // N is divisible by 2
            cout << "Yes" << endl;
        }
        else {

            // N is not divisible by 2
            cout << "No" << endl;
        }
    }

    return 0;
}
