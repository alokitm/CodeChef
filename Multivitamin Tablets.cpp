// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TABLETS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // x = required tablets
	    // y = available tablets
	    int x, y;
	    cin >> x >> y;

	    // Check if available tablets are at least 3 times required
	    if (y >= 3 * x) {
	        cout << "yes" << endl;
	    }
	    else {
	        cout << "no" << endl;
	    }
	}

	return 0;
}
