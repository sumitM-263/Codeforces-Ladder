#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> v(n);

    int cnt0=0;
    int cnt5=0;

    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i]==0) cnt0++;
        else cnt5++;
    }

    if(cnt0==0){
        cout << -1 <<endl;
    }

    else{
        while(cnt5%9!=0){
            cnt5--;
        }

        string ans="";
        if(cnt5>0){
            while(cnt5--){
                ans.push_back('5');
            }
            while(cnt0--){
                ans.push_back('0');
            }
        }else{
            ans.push_back('0');
        }

        cout << ans << endl;
    }
}