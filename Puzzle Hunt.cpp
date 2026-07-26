// CODECHEF Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PUZHUNT

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

        // N = number of puzzles solved
        int N;
        cin >> N;

        // Check whether the number of solved puzzles is between 6 and 8 (inclusive)
        if (N >= 6 && N <= 8) {

            // Eligible
            cout << "yes" << endl;
        }
        else {

            // Not eligible
            cout << "no" << endl;
        }
    }

    return 0;
}
