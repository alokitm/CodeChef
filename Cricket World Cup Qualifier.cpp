// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CWC23QUALIF
#include <bits/stdc++.h>
using namespace std;

int main() {

    int x;          // number of matches won
    cin >> x;       // input the number of wins

    // check if wins are enough to qualify
    if (x >= 12) {
        cout << "Yes";   // team qualifies
    } 
    else {
        cout << "No";    // team does not qualify
    }

    return 0;   // program end
}
