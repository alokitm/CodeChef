// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PARTY2

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // n = number of friends
	    // x = cost per person
	    // k = total budget
	    int n, x, k;
	    cin >> n >> x >> k;

	    // Check if budget is sufficient
	    if (k >= n * x) {
	        cout << "yes" << endl;
	    }
	    else {
	        cout << "no" << endl;
	    }
	}

	return 0;
}
