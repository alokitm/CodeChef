// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/WAITTIME

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // K = number of weeks, X = days already waited
	    int K, X;
	    cin >> K >> X;

	    // Total days = 7 * K, remaining wait time
	    cout << 7 * K - X << endl;
	}

	return 0;
}
