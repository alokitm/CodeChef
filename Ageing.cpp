// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/JERRYCHASE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // X = speed of Tom, Y = speed of Jerry
	    int X, Y;
	    cin >> X >> Y;

	    // Check if Jerry is faster than Tom
	    if (Y > X) {
	        cout << "Yes" << endl;
	    }
	    else {
	        cout << "No" << endl;
	    }
	}

	return 0;
}
