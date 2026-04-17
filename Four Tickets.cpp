// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FOURTICKETS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // X = cost of one ticket
	    int X;
	    cin >> X;

	    // Check if total cost of 4 tickets is within budget (<= 1000)
	    if (4 * X <= 1000) {
	        cout << "Yes" << endl;
	    }
	    else {
	        cout << "No" << endl;
	    }
	}

	return 0;
}
