// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/COUGAME

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

        // G = number of girls
        // B = number of boys
        int G, B;
        cin >> G >> B;

        // Print the difference between boys and girls
        cout << (B - G) << endl;
    }

    return 0;
}
