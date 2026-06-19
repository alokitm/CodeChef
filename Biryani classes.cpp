// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BIRYANI

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

        // X = number of biryani plates
        // Y = cost per plate
        int X, Y;
        cin >> X >> Y;

        // Total cost = number of plates × cost per plate
        cout << X * Y << endl;
    }

    return 0;
}
