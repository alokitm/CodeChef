// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/KITCHENTIME

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t, x, y;

	// Input number of test cases
	cin >> t;

	while (t--) {
	    // x = start time, y = end time
	    cin >> x >> y;

	    // Time spent in kitchen
	    cout << y - x << endl;
	}

	return 0;
}
