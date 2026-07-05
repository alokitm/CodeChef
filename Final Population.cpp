// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/POPULATION

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

        // X = current population
        // Y = number of people who left
        // Z = number of people who arrived
        int X, Y, Z;
        cin >> X >> Y >> Z;

        // Final population
        // = current population - people who left + people who arrived
        cout << X - Y + Z << endl;
    }

    return 0;
}
