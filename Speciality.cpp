// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SPECIALITY

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

        // X = Setter's rating
        // Y = Tester's rating
        // Z = Editorialist's rating
        int X, Y, Z;
        cin >> X >> Y >> Z;

        // Check if Setter has the highest rating
        if (X > Y && X > Z) {

            // Setter has the highest rating
            cout << "Setter" << endl;
        }
        else if (Y > X && Y > Z) {

            // Tester has the highest rating
            cout << "Tester" << endl;
        }
        else {

            // Editorialist has the highest rating
            cout << "Editorialist" << endl;
        }
    }

    return 0;
}
