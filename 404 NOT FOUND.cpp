// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/ERROR404

#include <bits/stdc++.h>
using namespace std;

int main() {
    // X = status code
    int X;

    // Input
    cin >> X;

    // Check if status code is 404
    if (X == 404)
        cout << "NOT FOUND";
    else
        cout << "FOUND";

    return 0;
}
