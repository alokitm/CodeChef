// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INTRDSGN

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // x1, y1 = dimensions/design values of first option
	    // x2, y2 = dimensions/design values of second option
	    int x1, y1, x2, y2;
	    cin >> x1 >> y1 >> x2 >> y2;

	    // Output the minimum total value
	    cout << min(x1 + y1, x2 + y2) << endl;
	}

	return 0;
}
