// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MVR
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int A,B,X,Y ;
	cin >> A >> B >> X >> Y ;
	int Messi, Ronaldo ;
	Messi = 2*A + B ;
	Ronaldo = 2*X + Y ;
	if(Messi>Ronaldo){
	    cout << "Messi" << endl ;
	}
	else if(Messi==Ronaldo){
	    cout << "Equal" << endl ;
	}
	else{
	    cout << "Ronaldo" << endl ;
	}
	return 0 ;
}
