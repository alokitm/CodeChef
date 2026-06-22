// Problem Link: Not Provided

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

        // N = given number
        int N;
        cin >> N;

        // Check whether N is divisible by 3
        if (N % 3 == 0) {

            // Number is divisible by 3
            cout << "Yes" << endl;
        }
        else {

            // Number is not divisible by 3
            cout << "No" << endl;
        }
    }

    return 0;
}
