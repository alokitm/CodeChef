// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CARTRIP

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

        // X = distance travelled in kilometers
        int X;
        cin >> X;

        // Minimum charge is 3000 for distances up to 300 km
        if (X <= 300) {

            cout << 3000 << endl;
        }
        else {

            // For distances greater than 300 km,
            // charge is 10 units per kilometer
            cout << X * 10 << endl;
        }
    }

    return 0;
}
