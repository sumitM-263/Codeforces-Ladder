#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >>n;
        string s;
        cin >> s;

        int cnt0=0;
        int cnt1=0;
        vector<int> zeros;

        for(int i=0;i<s.size();i++){

            if(s[i]=='0') cnt0++;

            else{
                cnt1++;
                if(cnt0!=0){
                     zeros.push_back(cnt0);
                     cnt0=0;
                }
                
            }
        }
        if(cnt0!=0) zeros.push_back(cnt0);
        // cout << zeros.size() << " " << cnt1;
        if(zeros.size()>=cnt1) cout << "NO" <<endl;
        else cout << "YES" << endl;
    }
}