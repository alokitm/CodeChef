// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHAIRS_

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // X = total chairs needed, Y = chairs already available
	    int X, Y;
	    cin >> X >> Y;

	    // Remaining chairs required (cannot be negative)
	    if (X - Y > 0) {
	        cout << X - Y << endl;
	    }
	    else {
	        cout << "0" << endl;
	    }
	}

	return 0;
}
