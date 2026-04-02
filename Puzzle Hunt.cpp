// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PUZHUNT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // N = number of puzzles solved
	    int N;
	    cin >> N;

	    // Check if N is between 6 and 8 (inclusive)
	    if (N >= 6 && N <= 8) {
	        cout << "yes" << endl;
	    }
	    else {
	        cout << "no" << endl;
	    }
	}

	return 0;
}
