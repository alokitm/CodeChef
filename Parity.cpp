// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PAR2

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // N = given number
	    int N;
	    cin >> N;

	    // Check if N is even
	    if (N % 2 == 0) {
	        cout << "Yes" << endl;
	    }
	    else {
	        cout << "No" << endl;
	    }
	}

	return 0;
}
