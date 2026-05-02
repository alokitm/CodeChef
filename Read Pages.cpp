// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/READPAGES

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // n = total pages
	    // x = pages read per day
	    // y = number of days
	    int n, x, y;
	    cin >> n >> x >> y;

	    // Check if total readable pages (x * y) cover n
	    if (n <= x * y) {
	        cout << "yes" << endl;
	    }
	    else {
	        cout << "no" << endl;
	    }
	}

	return 0;
}
