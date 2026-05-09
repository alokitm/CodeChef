/*
    Problem: Mario and the Broken String (M1ENROL)
    Platform: CodeChef
    Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/M1ENROL

    Approach:
    - Read number of test cases.
    - For each test case:
        - Input total seat capacity (X) and currently enrolled students (Y).
        - If enrolled students are greater than or equal to capacity,
          print extra students needed -> (Y - X).
        - Otherwise, print 0.

    Time Complexity: O(T)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int x, y;

        // x = seat capacity
        // y = enrolled students
        cin >> x >> y;

        // If enrolled students exceed or match capacity
        if (y >= x) {
            cout << (y - x) << endl;
        }

        // If seats are still available
        else {
            cout << 0 << endl;
        }
    }

    return 0;
}
