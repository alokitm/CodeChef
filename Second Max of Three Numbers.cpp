// Codechef Problem Link : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SNDMAX
#include <bits/stdc++.h>
using namespace std;

int main() {
    // n = number of test cases
    int n;
    cin >> n;

    while (n--) {
        // Array to store 3 numbers
        int nums[3];

        // Input
        cin >> nums[0] >> nums[1] >> nums[2];

        // Sort the array in ascending order
        // After sorting:
        // nums[0] = smallest
        // nums[1] = second maximum (middle)
        // nums[2] = largest
        sort(nums, nums + 3);

        // Output second maximum
        cout << nums[1] << endl;
    }

    return 0;
}
