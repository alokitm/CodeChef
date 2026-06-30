// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CWC23QUALIF

// Time Complexity: O(1)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // X = number of matches won
    int X;
    cin >> X;

    // A team qualifies if it wins at least 12 matches
    if (X >= 12) {

        // Team qualifies
        cout << "Yes";
    }
    else {

        // Team does not qualify
        cout << "No";
    }

    return 0;
}
