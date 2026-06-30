// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DETSCORE

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

        // X = total marks of the exam
        // N = number of correctly answered questions
        int X, N;
        cin >> X >> N;

        // The exam has 10 questions
        // Marks per question = X / 10
        // Total score = marks per question × correct answers
        cout << (X / 10) * N << endl;
    }

    return 0;
}
