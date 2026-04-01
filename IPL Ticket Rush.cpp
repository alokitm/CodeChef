// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/IPLTRSH

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T, N, M;
	cin >> T;

	while (T--) {
	    // N = total capacity
	    // M = current usage
	    cin >> N >> M;

	    // If usage exceeds or equals capacity → no space left
	    if (N - M <= 0) {
	        cout << "0" << endl;
	    }
	    else {
	        // Remaining space
	        cout << N - M << endl;
	    }
	}

	return 0;
}
