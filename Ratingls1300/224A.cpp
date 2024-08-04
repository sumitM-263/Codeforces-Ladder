#include <bits/stdc++.h>
using namespace std;

int main(){

    long long ab,bc,ca;
    cin >> ab >> bc >> ca;

    long long m=ab*bc*ca;
    long long abc=sqrt(m);

    long long a=abc/bc;
    long long b=abc/ca;
    long long c=abc/ab;

    int ans=4*(a+b+c);

    cout << ans <<endl;

    return 0;
}