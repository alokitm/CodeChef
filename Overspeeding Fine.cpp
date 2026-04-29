// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FINE
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t;
	while(t--){
	    int x ;
	    cin >> x ;
	    
	    if(x<=70){
	        cout << "0" << endl ;
	    }
	    else if(x>70 && x<=100){
	        cout << "500" << endl ;
	    }
	    else{
	        cout << "2000" << endl ;
	    }
	}
	return 0 ;

}
