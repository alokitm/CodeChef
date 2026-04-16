// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BULLBEAR
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T ;
	cin >> T ;
	while(T--){
	    int X,Y ;
	    cin >> X >> Y ;
	    if(Y>X){
	        cout << "Profit" << endl ;
	    }
	    else if(Y==X){
	        cout << "Neutral" << endl ;
	    }
	    else{
	        cout << "Loss" << endl ;
	    }
	}
	return 0 ;

}
