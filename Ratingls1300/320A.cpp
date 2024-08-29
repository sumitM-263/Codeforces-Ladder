#include <bits/stdc++.h>
using namespace std;

bool isMagical(string s){
    int n=s.size();

    for(int i=0;i<n;i++)
        if(s[i]!='1' && s[i]!='4') return false;

    if(s[0]=='4') return false;

    if(s.find("444")!=s.npos) return false;

    return true;
}

int main(){

    string n;
    cin >> n;

    if(isMagical(n)){
        cout << "YES" <<endl;
    }

    else {
        cout << "NO" <<endl;
    }
}