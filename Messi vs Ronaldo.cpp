// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MVR

// Time Complexity: O(1)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // A = goals scored by Messi
    // B = assists made by Messi
    // X = goals scored by Ronaldo
    // Y = assists made by Ronaldo
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;

    // Performance score:
    // Goals are worth 2 points and assists are worth 1 point
    int Messi = 2 * A + B;
    int Ronaldo = 2 * X + Y;

    // Compare the performance scores
    if (Messi > Ronaldo) {

        // Messi has the higher score
        cout << "Messi" << endl;
    }
    else if (Messi == Ronaldo) {

        // Both players have the same score
        cout << "Equal" << endl;
    }
    else {

        // Ronaldo has the higher score
        cout << "Ronaldo" << endl;
    }

    return 0;
}
