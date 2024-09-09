#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        string s;
        cin >> s;

        int h=0;
        int t=0;

        for(int i=1;i<n;i++){
            if(s[i-1]=='.' and s[i]=='.' and s[i+1]=='.') t+=1;
        }

        for(auto i:s) if(i=='#') h+=1;


        if(t>=1) cout << 2 <<endl;
        else cout << n-h << endl;
    }
}