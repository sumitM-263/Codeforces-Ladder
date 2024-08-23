#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        // vector<int> v(n);
        int a;
        unordered_map<int,int> mpp;

        for(int i=0;i<n;i++){
            cin >> a;
            mpp[a]++;
        }

        bool isOdd=false;
        for(auto it:mpp){
            if(it.second&1) isOdd=true;
        }

        if(isOdd) cout << "YES" <<endl;
        else cout << "NO" <<endl;
        
    }
}