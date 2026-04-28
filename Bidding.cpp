// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/RAINFALL1

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // x = rainfall amount
	    int x;
	    cin >> x;

	    // Categorize rainfall
	    if (x < 3) {
	        cout << "light" << endl;
	    }
	    else if (x >= 3 && x < 7) {
	        cout << "moderate" << endl;
	    }
	    else {
	        cout << "heavy" << endl;
	    }
	}

	return 0;
}
