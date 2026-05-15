// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/POPULATION

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // x = current population
	    // y = people who left
	    // z = people who arrived
	    int x, y, z;
	    cin >> x >> y >> z;

	    // Final population
	    cout << x - y + z << endl;
	}

	return 0;
}
