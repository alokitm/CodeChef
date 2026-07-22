// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/OFFBY1

// Time Complexity: O(1)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // A = number of items of the first type
    // B = number of items of the second type
    int A, B;

    // Input values
    cin >> A >> B;

    // Each item contributes 10 units
    // Final total = (A × 10) + (B × 10) + 1
    cout << A * 10 + B * 10 + 1;

    return 0;
}
