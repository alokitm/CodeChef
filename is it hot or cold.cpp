// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/HOTCOLD

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

        // c = temperature in degree Celsius
        int c;
        cin >> c;

        // If temperature is greater than 20
        // then weather is considered hot
        if(c > 20) {
            cout << "hot" << endl;
        }
        else {

            // Otherwise weather is cold
            cout << "cold" << endl;
        }
    }

    return 0;
}
