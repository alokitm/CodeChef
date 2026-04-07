// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHEFONDATE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // X = amount Chef has, Y = required amount
	    int X, Y;
	    cin >> X >> Y;

	    // Check if Chef can afford the date
	    if (X >= Y) {
	        cout << "Yes" << endl;
	    }
	    else {
	        cout << "No" << endl;
	    }
	}

	return 0;
}
