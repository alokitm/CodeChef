// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SIXFRIENDS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // x = cost option 1
	    // y = cost option 2
	    int x, y;
	    cin >> x >> y;

	    // Choose the minimum cost option
	    cout << min(3 * x, 2 * y) << endl;
	}

	return 0;
}
