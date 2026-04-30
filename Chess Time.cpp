// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHESSTIME

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // n = number of hours
	    int n;
	    cin >> n;

	    // Each game takes 20 minutes → total minutes = n * 60
	    // Number of games = total minutes / 20
	    cout << (n * 60) / 20 << endl;
	}

	return 0;
}
