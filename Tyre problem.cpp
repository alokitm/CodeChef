// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TYRE

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

        // N = number of cars
        // M = number of motorcycles
        int N, M;
        cin >> N >> M;

        // Each car needs 4 tyres and each motorcycle needs 2 tyres
        cout << (2 * N) + (4 * M) << endl;
    }

    return 0;
}
