// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DONDRIVE
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin >> T;  // number of test cases
    
    while(T--) {
        int N, X;
        cin >> N >> X;
        
        int remaining = N - X;
        
        cout << remaining << endl;
    }
    
    return 0;

}
