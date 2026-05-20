// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CARTRIP
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    if(x<=300){
	        cout << "3000" << endl;
	    }
	    else{
	        cout << x*10 << endl ;
	    }
	}
return 0 ;
}
