#include <bits/stdc++.h>
using namespace std;



int main(){

    int t;
    cin >> t;

    while(t--){

        int p1,p2,p3;
        cin >> p1 >> p2 >>p3;

        if((p1+p2+p3)&1) cout << -1 <<endl;
        else cout << min((p1+p2),(p1+p2+p3)/2) <<endl;
    }
}