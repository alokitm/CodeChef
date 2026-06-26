// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHESSTIME

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

        // N = total number of hours available
        int N;
        cin >> N;

        // Convert hours to minutes
        // Total minutes = N × 60
        // Each chess game takes 20 minutes
        // Number of games = Total minutes / 20
        cout << (N * 60) / 20 << endl;
    }

    return 0;
}
