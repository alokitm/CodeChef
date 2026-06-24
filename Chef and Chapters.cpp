// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SEMCOURSES

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

        // X = number of semesters
        // Y = number of courses per semester
        // Z = credits per course
        int X, Y, Z;
        cin >> X >> Y >> Z;

        // Total credits earned
        // = semesters × courses per semester × credits per course
        cout << X * Y * Z << endl;
    }

    return 0;
}
