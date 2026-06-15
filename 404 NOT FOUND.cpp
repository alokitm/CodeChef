// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/ERROR404

// Time Complexity: O(1)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // X = status code
    int X;

    // Input status code
    cin >> X;

    // Check whether the status code is 404
    if (X == 404) {

        // If status code is 404
        // then page is not found
        cout << "NOT FOUND";
    }
    else {

        // Otherwise page is found
        cout << "FOUND";
    }

    return 0;
}
