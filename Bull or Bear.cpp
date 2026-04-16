// codechef problem link : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BULLBEAR
#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // X = cost price, Y = selling price
	    int X, Y;
	    cin >> X >> Y;

	    // Determine profit, loss, or neutral
	    if (Y > X) {
	        cout << "Profit" << endl;
	    }
	    else if (Y == X) {
	        cout << "Neutral" << endl;
	    }
	    else {
	        cout << "Loss" << endl;
	    }
	}

	return 0;
}
