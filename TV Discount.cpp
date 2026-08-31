// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TVDISC

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

        // A = original price of the first TV
        // B = original price of the second TV
        // C = discount on the first TV
        // D = discount on the second TV
        int A, B, C, D;
        cin >> A >> B >> C >> D;

        // Calculate the final price after discount
        int first = A - C;
        int second = B - D;

        // Compare the final prices
        if (first < second) {

            // First TV is cheaper
            cout << "First" << endl;
        }
        else if (second < first) {

            // Second TV is cheaper
            cout << "Second" << endl;
        }
        else {

            // Both TVs have the same final price
            cout << "Any" << endl;
        }
    }

    return 0;
}
