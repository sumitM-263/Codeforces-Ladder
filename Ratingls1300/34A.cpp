#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> A(n);

    for(int i=0;i<n;i++){
        cin >> A[i];
    }

    int diff=INT_MAX;
    int a,b;
    for(int i=0;i<n;i++){
        int x=A[i];
        int y=A[(i+1)%n];

        if(abs(x-y)<diff){
            diff=abs(x-y);
            a=i+1;
            b=(i+1)%n+1;
        }

    }

    cout << a << " " << b <<endl;
}