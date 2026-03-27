// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DONDRIVE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // N = required donations
	    // X = collected donations
	    int N, X;
	    cin >> N >> X;

	    // Remaining donations needed
	    int remaining = N - X;

	    // Output result
	    cout << remaining << endl;
	}

	return 0;
}
