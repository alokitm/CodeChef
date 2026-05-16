// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PARTY2
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t;
	while(t--){
	    int n, x, k;
	    cin >> n >> x >> k;
	    if(k>=n*x){
	        cout << "yes" << endl;
	    }
	    else{
	        cout << "no" << endl;
	    }
	}
	return 0;

}
