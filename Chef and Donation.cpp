// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DNATION

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

        // X = current donations collected
        // Y = target donations required
        int X, Y;
        cin >> X >> Y;

        // Calculate the additional donations needed
        cout << Y - X << endl;
    }

    return 0;
}
