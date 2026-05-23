// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CWIREFRAME

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // n = length
	    // m = breadth
	    // x = cost per unit
	    int n, m, x;
	    cin >> n >> m >> x;

	    // Total wireframe cost
	    cout << 2 * x * (n + m) << endl;
	}

	return 0;
}
