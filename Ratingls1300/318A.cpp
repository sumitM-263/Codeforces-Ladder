#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n,k;
    cin >> n >> k;

    long long p;
    if(n%2) p=n/2+1;
    else p=n/2;
    
    cout << p <<endl;
    long long ans;
    if(k<=p){

        ans=1+(k-1)*2;
    }
    else{
        ans=2+((k-p)-1)*2;
    }

    cout << ans <<endl;
}