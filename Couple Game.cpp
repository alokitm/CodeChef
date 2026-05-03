// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/COUGAME
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int b, g;

        // Input: number of girls (g) and boys (b)
        cin >> g >> b;

        // Output: difference between boys and girls
        cout << (b - g) << endl;
    }

    return 0;
}
