// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/REACH_HOME

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // x = speed per unit time
	    // y = required distance
	    int x, y;
	    cin >> x >> y;

	    // Check if Chef can reach home within 5 units of time
	    if (5 * x >= y) {
	        cout << "yes" << endl;
	    }
	    else {
	        cout << "no" << endl;
	    }
	}

	return 0;
}
