// CODECHEF Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INTRDSGN

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

        // X1, Y1 = values for the first design
        // X2, Y2 = values for the second design
        int X1, Y1, X2, Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;

        // Calculate the total value of both designs
        int firstDesign = X1 + Y1;
        int secondDesign = X2 + Y2;

        // Print the minimum total value
        cout << min(firstDesign, secondDesign) << endl;
    }

    return 0;
}
