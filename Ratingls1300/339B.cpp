#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    vector<int> v(m);

    for(int i=0;i<m;i++) cin >> v[i];

    int i=1;
    long long sum=0;

    for(auto f:v){

        if(i<=f){
            sum+=(f-i);
        }

        else{
            sum+=n-i+f;
        }
        i=f;
    }

    cout << sum <<endl;
}