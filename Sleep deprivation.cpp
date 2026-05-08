// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SLEEP

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // x = number of sleeping hours
	    int x;
	    cin >> x;

	    // Check if sleep is less than recommended
	    if (x < 7) {
	        cout << "yes" << endl;
	    }
	    else {
	        cout << "no" << endl;
	    }
	}

	return 0;
}
