// CODECHEF Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TALLER

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

        // X = height of person A
        // Y = height of person B
        int X, Y;
        cin >> X >> Y;

        // Compare the heights
        if (X > Y) {

            // Person A is taller
            cout << "A" << endl;
        }
        else {

            // Person B is taller
            cout << "B" << endl;
        }
    }

    return 0;
}
