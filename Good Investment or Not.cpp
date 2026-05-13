// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/LTIME

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // x = contest rank
	    int x;
	    cin >> x;

	    // Check if rank is between 1 and 4 (inclusive)
	    if (x >= 1 && x <= 4) {
	        cout << "yes" << endl;
	    }
	    else {
	        cout << "No" << endl;
	    }
	}

	return 0;
}
