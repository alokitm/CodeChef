// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INTRDSGN
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x1, y1, x2, y2;
	    cin >> x1 >> y1 >> x2 >> y2 ;
	    cout << min(x1+y1, x2+y2) << endl ;
	}
	return 0;

}
