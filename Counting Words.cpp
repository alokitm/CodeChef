// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CLEARDAY

// Time Complexity: O(1)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // X = number of days Chef worked
    // Y = number of days spent on other activities
    int X, Y;

    // Input values
    cin >> X >> Y;

    // Total days in a week = 7
    // Free days = 7 - (working days + other activity days)
    cout << 7 - (X + Y);

    return 0;
}
