// CODECHEF Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/KITCHENTIME

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

        // X = start time
        // Y = end time
        int X, Y;
        cin >> X >> Y;

        // Time spent in the kitchen
        cout << Y - X << endl;
    }

    return 0;
}
