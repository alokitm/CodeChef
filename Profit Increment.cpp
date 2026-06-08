// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PROINC

// Time Complexity: O(t)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // Variable to store number of test cases
    int t;
    cin >> t;

    // Process each test case
    while(t--) {

        // x = current salary
        // y = additional income
        int x, y;
        cin >> x >> y;

        // Increase in salary is 10% of x
        // Final income = increased salary + additional income
        cout << x * 0.1 + y << endl;
    }

    return 0;
}
