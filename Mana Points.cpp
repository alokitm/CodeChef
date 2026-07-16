// CODECHEF Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MANAPTS

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

        // X = cost of one apartment
        // Y = total budget available
        int X, Y;
        cin >> X >> Y;

        // Maximum apartments that can be purchased
        // = total budget / cost per apartment
        cout << Y / X << endl;
    }

    return 0;
}
