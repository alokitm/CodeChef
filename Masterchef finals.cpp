// Problem Link : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TOP10

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // X = rank
	    int X;
	    cin >> X;

	    // Check if rank is within top 10
	    if (1 <= X && X <= 10) {
	        cout << "Yes" << endl;
	    }
	    else {
	        cout << "No" << endl;
	    }
	}

	return 0;
}
