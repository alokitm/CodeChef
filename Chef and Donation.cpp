// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DNATION

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // X = current donations, Y = required donations
	    int X, Y;
	    cin >> X >> Y;

	    // Additional donations needed
	    cout << Y - X << endl;
	}

	return 0;
}
