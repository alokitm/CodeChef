// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/REACH_HOME
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x, y;
	    cin >> x >> y;
	    if(5*x>=y){
	        cout << "yes" << endl ;
	    }
	    else{
	        cout << "no" << endl ;
	    }
	}
	return 0;

}
