// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/HS08TEST

// Time Complexity: O(1)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // X = withdrawal amount
    int X;

    // Y = initial account balance
    double Y;

    cin >> X >> Y;

    // Withdrawal is possible only if:
    // 1. X is multiple of 5
    // 2. Account has enough balance including bank charge of 0.50
    if(X % 5 == 0 && Y >= X + 0.50) {

        // Deduct withdrawal amount and transaction fee
        Y = Y - X - 0.50;
    }

    // Print final balance with 2 decimal places
    cout << fixed << setprecision(2) << Y << endl;

    return 0;
}
