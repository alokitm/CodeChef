// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CNTWRD

// Time Complexity: O(T) & Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // T = number of test cases
    int T;
    cin >> T;

    // Process each test case
    while (T--) {

        // M = number of rows
        // N = number of columns
        int M, N;
        cin >> M >> N;

        // Total words = rows × columns
        cout << M * N << endl;
    }

    return 0;
}
