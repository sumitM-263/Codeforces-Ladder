#include <bits/stdc++.h>
using namespace std;

int yCoordinate(string s){

    int y;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='#'){
            cnt++;
            y=i;
        }
        
    }

    if(cnt==1) return y;
    return -1;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n,m;
        cin >> n >> m;

        vector<string> v(n);
        vector<pair<int,int>> p;

        for(int i=0;i<n;i++) cin >> v[i];

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]=='#'){
                    p.push_back({i+1,j+1});
                    break;
                }
            }
            if(p.size()==1) break;
        }

        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(v[i][j]=='#'){
                    p.push_back({i+1,j+1});
                    break;
                }
            }
            if(p.size()==2){
                break;
            }
        }

        int x=0;
        int y=0;

        for(auto it:p){
            x+=it.first;
            y+=it.second;
        }

        cout << x/2 << " " <<y/2 <<endl;
    }
}