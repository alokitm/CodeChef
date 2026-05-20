// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CARTRIP

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // x = distance travelled
	    int x;
	    cin >> x;

	    // Minimum charge is 3000 for up to 300 km
	    if (x <= 300) {
	        cout << "3000" << endl;
	    }
	    else {
	        // Charge = 10 per km
	        cout << x * 10 << endl;
	    }
	}

	return 0;
}
