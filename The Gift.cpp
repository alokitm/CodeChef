// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CS2023_GIFT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// x = current money
	// n = cost of the gift
	// m = additional money received
	int x, n, m;
	cin >> x >> n >> m;

	// Total available budget
	int budget = x + m;

	// Check if gift can be purchased
	if (n > budget) {
	    cout << "no" << endl;
	}
	else {
	    cout << "yes" << endl;
	}

	return 0;
}
