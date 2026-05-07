// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FEVER

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // x = body temperature
	    int x;
	    cin >> x;

	    // Check if temperature indicates fever
	    if (x > 98) {
	        cout << "yes" << endl;
	    }
	    else {
	        cout << "no" << endl;
	    }
	}

	return 0;
}
