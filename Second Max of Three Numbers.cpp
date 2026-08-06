// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SNDMAX

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

        // Array to store the three numbers
        int nums[3];

        // Input the three numbers
        cin >> nums[0] >> nums[1] >> nums[2];

        // Sort the array in ascending order
        sort(nums, nums + 3);

        // After sorting:
        // nums[0] = smallest element
        // nums[1] = second largest element
        // nums[2] = largest element

        // Print the second largest element
        cout << nums[1] << endl;
    }

    return 0;
}
