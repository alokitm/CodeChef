// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CWIREFRAME

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

        // N = length of the rectangle
        // M = breadth of the rectangle
        // X = cost per unit length of wire
        int N, M, X;
        cin >> N >> M >> X;

        // Perimeter of rectangle = 2 × (N + M)
        // Total wireframe cost = perimeter × cost per unit
        cout << 2 * X * (N + M) << endl;
    }

    return 0;
}
