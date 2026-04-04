// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TALLER

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // X = height of A, Y = height of B
	    int X, Y;
	    cin >> X >> Y;

	    // Compare heights
	    if (X > Y) {
	        cout << "A" << endl;
	    }
	    else {
	        cout << "B" << endl;
	    }
	}

	return 0;
}
