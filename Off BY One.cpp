// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/OFFBY1

#include <bits/stdc++.h>
using namespace std;

int main() {
	// A = number of 10-unit items
	// B = number of 10-unit items
	int A, B;

	// Input
	cin >> A >> B;

	// Calculation:
	// Total = (A * 10) + (B * 10) + 1
	cout << A * 10 + B * 10 + 1;

	return 0;
}
