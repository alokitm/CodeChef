// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INSTAGRAM

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

        // x = number of followers
        // y = number of following
        int x, y;
        cin >> x >> y;

        // Check if followers are greater than 10 times following
        if(x > 10 * y) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    return 0;
}
