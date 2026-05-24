// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MINCOINSREQ

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // x = given amount
	    int x;
	    cin >> x;

	    // Minimum coins required (remainder after division by 10)
	    cout << x % 10 << endl;
	}

	return 0;
}
