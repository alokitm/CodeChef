// Problem Link:
// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BNE_APT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// N = number of items of type 1
	// M = number of items of type 2
	int N, M;

	// X = cost of type 1 item
	// Y = cost of type 2 item
	int X, Y;

	// Input
	cin >> N >> M;
	cin >> X >> Y;

	// Total cost calculation
	cout << N * X + M * Y;

	return 0;
}
