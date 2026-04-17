// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FOURTICKETS
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T ;
	cin >> T ;
	while(T--){
	    int X;
	    cin >> X;
	    if(4*X<=1000){
	        cout << "Yes" << endl ;
	    }
	    else{
	        cout << "No" << endl ;
	    }
	}
	return 0 ;

}
