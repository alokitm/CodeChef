// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/LUDO

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T; 
	cin >> T;

	while (T--) {
	    // X = number rolled on dice in game 
	    int X;
	    cin >> X;

	    // If dice shows 6 → player can move
	    if (X == 6) {
	        cout << "Yes" << endl;
	    }
	    else {
	        cout << "No" << endl;
	    }     
	}

	return 0;
}
