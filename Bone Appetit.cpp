// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BNE_APT

// Time Complexity: O(1) & Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // N = number of items of type 1
    // M = number of items of type 2
    int N, M;

    // X = cost of one type 1 item
    // Y = cost of one type 2 item
    int X, Y;

    // Input values
    cin >> N >> M;
    cin >> X >> Y;

    // Calculate total cost:
    // (N × X) + (M × Y)
    cout << N * X + M * Y;

    return 0;
}
