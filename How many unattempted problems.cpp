// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PRACLIST

// Time Complexity: O(1)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // X = total number of problems in the practice list
    // Y = number of problems already solved
    int X, Y;

    // Input values
    cin >> X >> Y;

    // Remaining problems to solve
    cout << X - Y;

    return 0;
}
