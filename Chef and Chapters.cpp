// Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SEMCOURSES

#include <bits/stdc++.h>
using namespace std;

int main() {
	// t = number of test cases
	int t;
	cin >> t;

	while (t--) {
	    // x = semesters
	    // y = courses per semester
	    // z = credits per course
	    int x, y, z;
	    cin >> x >> y >> z;

	    // Total credits
	    cout << x * y * z << endl;
	}

	return 0;
}
