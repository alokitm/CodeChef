// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BESTOFTWO

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // X and Y = scores
	    int X, Y;
	    cin >> X >> Y;

	    // Output the maximum of the two
	    cout << max(X, Y) << endl;
	}

	return 0;
}
