// Problem Link:https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CLEARDAY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// Variables:
	// X = number of days Chef worked
	// Y = number of days spent on other activities
	int X, Y;

	// Input values of X & Y
	cin >> X;
	cin >> Y;

	// Total days in a week = 7
	// Remaining free days = 7 - (X + Y)
	cout << 7 - (X + Y);

	return 0;
}
