// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/REACHTARGET

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // X = target score, Y = current score
	    int X, Y;
	    cin >> X >> Y;

	    // Points needed to reach target
	    cout << X - Y << endl;
	}

	return 0;
}
