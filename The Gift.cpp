// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CS2023_GIFT

// Time Complexity: O(1)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // X = current amount of money Chef has
    // N = cost of the gift
    // M = additional money received
    int X, N, M;
    cin >> X >> N >> M;

    // Calculate the total available budget
    int budget = X + M;

    // Check whether Chef has enough money to buy the gift
    if (N > budget) {

        // Budget is insufficient
        cout << "no" << endl;
    }
    else {

        // Budget is sufficient
        cout << "yes" << endl;
    }

    return 0;
}
