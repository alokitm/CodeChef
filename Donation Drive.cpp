// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DONDRIVE

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

        // N = target donation amount
        // X = donation amount collected so far
        int N, X;
        cin >> N >> X;

        // Calculate the remaining donation needed
        int remaining = N - X;

        // Print the remaining amount
        cout << remaining << endl;
    }

    return 0;
}
