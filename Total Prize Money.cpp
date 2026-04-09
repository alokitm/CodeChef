// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PRIZEPOOL

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // X = number of smaller prizes
	    // Y = number of larger prizes
	    int X, Y;
	    cin >> X >> Y;

	    // Total prize pool
	    cout << 10 * X + 90 * Y << endl;
	}

	return 0;
}
