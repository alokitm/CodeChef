// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/OCTATHON
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int X;
	cin >> X ;
	if(X<3){
	    cout << "gold" << endl ;
	}
    else if(X>=3 && X<6){
	    cout << "silver" << endl ;
	}
	else{
	    cout << "bronze" << endl ;
	}
	return 0 ;

}
