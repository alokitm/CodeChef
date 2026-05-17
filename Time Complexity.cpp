// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/COMPLEXITY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // x = old complexity
	    // y = new complexity
	    int x, y;
	    cin >> x >> y;

	    // Check if old complexity is greater
	    if (x > y) {
	        cout << "yes" << endl;
	    }
	    else {
	        cout << "no" << endl;
	    }
	}

	return 0;
}
