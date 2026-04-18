// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHAIRS_
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T ;
	cin >> T ;
	while(T--){
	    int X,Y ;
	    cin >> X >> Y ;
	    if(X-Y>0){
	         cout << X-Y << endl ;
	    }
	    else{
	        cout << "0" << endl ;
	    }
	}
	return 0 ;

}
