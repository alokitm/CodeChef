// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AIRINDEX

// Time Complexity: O(1)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // x = Air Quality Index (AQI)
    int x;
    cin >> x;

    // Check if the air quality is acceptable
    if (x < 100) {

        // AQI below 100 is considered acceptable
        cout << "YES" << endl;
    }
    else {

        // AQI 100 or more is not acceptable
        cout << "NO" << endl;
    }

    return 0;
}
