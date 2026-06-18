// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BESTOFTWO

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

        // X and Y = scores obtained in two attempts
        int X, Y;
        cin >> X >> Y;

        // Print the higher score among the two attempts
        cout << max(X, Y) << endl;
    }

    return 0;
}
