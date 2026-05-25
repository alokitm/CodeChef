//Codechef  Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/KITCHENSPICE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // x = spice level
	    int x;
	    cin >> x;

	    // Categorize spice level
	    if (x < 4) {
	        cout << "mild" << endl;
	    }
	    else if (x >= 4 && x < 7) {
	        cout << "medium" << endl;
	    }
	    else {
	        cout << "hot" << endl;
	    }
	}

	return 0;
}
