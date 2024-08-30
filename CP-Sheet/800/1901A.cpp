#include <bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;

    while(t--){
        int n,x;
        cin >> n >> x;

        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];

        int m=2*(x-v[n-1]);
        int i=0;
        vector<int> a;
        for(auto f:v){
            int d=f-i;
            a.push_back(d);
            i=f;
        }

        a.push_back(m);

        auto ans=max_element(a.begin(),a.end());


        cout << *ans <<endl;

    }
}