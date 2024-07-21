#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int lower=0;
    int upper=0;

    string ans="";

    for(int i=0;i<s.size();i++){
        if(s[i]>=65 and s[i]<=90) upper++;
        else if(s[i]>=97 and s[i]<=122) lower++;
    }

    if(upper>lower){
        for(int i=0;i<s.size();i++){
            if(s[i]>=97 and s[i]<=122) ans+=(s[i]-32);
            else ans+=s[i];
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 and s[i]<=90) ans+=(s[i]+32);
            else ans+=s[i];
        }

    }

    cout << ans << endl;
    
    return 0;
}