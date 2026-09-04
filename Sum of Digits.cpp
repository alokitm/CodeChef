// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FLOW006

// Time Complexity: O(T * D), where D is the number of digits in N
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {

    // T = number of test cases
    int T;
    cin >> T;

    // Process each test case
    while (T--) {

        // N = input number
        int N;
        cin >> N;

        // sum = sum of all digits of N
        int sum = 0;

        // Extract each digit and add it to sum
        while (N > 0) {

            // N % 10 gives the last digit of N
            sum += N % 10;

            // Remove the last digit from N
            N /= 10;
        }

        // Print the sum of digits
        cout << sum << endl;
    }

    return 0;
}
