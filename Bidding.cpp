// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AUCTION
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int  t ;
	cin >> t;
	while(t--){
	    int a,b,c ;
	    cin >> a >> b >> c ;
	    
	    int bid = max({a,b,c}) ;
	    // int bid = max(a, max(b,c)) ;
	    
	    if(bid == a){
	        cout << "alice" << endl ;
	    }
	    else if(bid == b){
	        cout << "bob" << endl ;
	    }
	    else{
	        cout << "charlie" << endl ;
	    }
	}
	return 0 ;

}
