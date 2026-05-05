// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AIRINDEX

#include <bits/stdc++.h>
using namespace std;
int main() {
    // x = air quality index
    int x;
    cin >> x;

    // Check if air quality is acceptable
    if (x < 100) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
