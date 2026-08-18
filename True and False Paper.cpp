// CodeChef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TFPAPER

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

        // N = total number of papers
        // K = number of papers used
        int N, K;
        cin >> N >> K;

        // Calculate the number of papers remaining
        cout << N - K << endl;
    }

    return 0;
}
