// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SUMM
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T ;
	cin >> T ;
	while(T--){
	    int A,B,C ;
	    cin >> A >> B >>C ;
	    if(A+B == C ){
	         cout << "Yes" << endl ;
	    }
	    else{
	        cout << "No" << endl ;
	    }
	}
	return 0 ;

}
