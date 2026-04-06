// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MINHEIGHT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // X = current height, H = required height
	    int X, H;
	    cin >> X >> H;

	    // Check if height requirement is met
	    if (X >= H) {
	        cout << "Yes" << endl;
	    }
	    else {
	        cout << "No" << endl;
	    }
	}

	return 0;
}
