// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BULLBEAR

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

        // X = cost price
        // Y = selling price
        int X, Y;
        cin >> X >> Y;

        // Compare selling price with cost price
        if (Y > X) {

            // Selling price is greater than cost price
            // Therefore, there is a profit
            cout << "Profit" << endl;
        }
        else if (Y == X) {

            // Selling price equals cost price
            // Therefore, there is no profit and no loss
            cout << "Neutral" << endl;
        }
        else {

            // Selling price is less than cost price
            // Therefore, there is a loss
            cout << "Loss" << endl;
        }
    }

    return 0;
}
