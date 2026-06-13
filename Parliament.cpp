// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PARLIAMENT

// Time Complexity: O(t) & Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // Variable to store number of test cases
    int t;
    cin >> t;

    // Process each test case
    while(t--) {

        // n = total seats in parliament
        // x = seats won by the party
        int n, x;
        cin >> n >> x;

        // A party forms majority if it has at least half the seats
        if(2 * x >= n) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    return 0;
}
