// Codechef Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MANAPTS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// T = number of test cases
	int T;
	cin >> T;

	while (T--) {
	    // X = cost per apartment, Y = total budget
	    int X, Y;
	    cin >> X >> Y;

	    // Maximum number of apartments that can be bought
	    cout << Y / X << endl;
	}

	return 0;
}
