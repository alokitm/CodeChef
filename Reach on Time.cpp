// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TIMELY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // X = time available
	    int X;
	    cin >> X;

	    // Check if time is at least 30 minutes
	    if (X >= 30) {
	        cout << "Yes" << endl;
	    }
	    else {
	        cout << "No" << endl;
	    }
	}

	return 0;
}
