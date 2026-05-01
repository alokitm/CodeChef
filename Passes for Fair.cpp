// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FAIRPASS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // n = number of people, k = pass limit
	    int n, k;
	    cin >> n >> k;

	    // Check eligibility for fair pass
	    if (n < k) {
	        cout << "yes" << endl;
	    }
	    else {
	        cout << "no" << endl;
	    }
	}

	return 0;
}
