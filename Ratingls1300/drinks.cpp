#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> juice(n);
    int a;
    double sum=0;
    for(int i=0;i<n;i++){
        cin >> a;
        
        sum= sum + (double) a/100;
    }
    
    double ans=(double) sum/n;

    cout << ans*100 << endl;

    return 0;
}