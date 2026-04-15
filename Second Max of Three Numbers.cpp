// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SNDMAX
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){
        int nums[3];
        cin >> nums[0] >> nums[1] >> nums[2];
        // Sort the array. After sorting, nums[1] will hold the second-maximum element.
        sort(nums, nums + 3);
        cout << nums[1] << endl;
    }
}
