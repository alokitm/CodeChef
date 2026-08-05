// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TAXSAVING

// Time Complexity: O(T)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // T = number of test cases
    int T;
    cin >> T;

    // Process each test case
    for (int i = 0; i < T; i++) {

        // X = total income
        // Y = tax-free income
        int X, Y;
        cin >> X >> Y;

        // Calculate the taxable income
        cout << X - Y << endl;
    }

    return 0;
}
