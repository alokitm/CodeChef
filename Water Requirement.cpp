// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/WATERREQ

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

        // N = number of people
        int N;
        cin >> N;

        // Each person requires 2 litres of water
        // Calculate the total water required
        cout << N * 2 << endl;
    }

    return 0;
}
