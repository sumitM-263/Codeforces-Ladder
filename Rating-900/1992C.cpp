#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n,m,k;
        cin >> n >> m >> k;

        vector<int> ans(n,0);
        unordered_map<int,int> mpp;

        int start=0;
        int end=n-1;

        while(n>=k){
            mpp[n]++;
            ans[start++]=n;
            n--;
        }

        while(m>0){
            mpp[m]++;
            ans[end--]=m;
            m--;
        }

        for(int i=1;i<=n;i++){
            if(mpp[i]==0){
                ans[start++]=i;
            }
        }

        for(int i=0;i<ans.size();i++) cout << ans[i] << " ";
        cout << endl;
    }
}