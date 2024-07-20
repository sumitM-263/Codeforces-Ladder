#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,t;
    cin >> n >> t;

    string s;
    cin >> s;

    for(int i=0;i<t;i++){
        int j=0;
        while(j<s.size()-1){
            if(s[j]=='B' and s[j+1]=='G'){
                swap(s[j],s[j+1]);
                j+=2;
            }
            else j+=1;
        }
    }

    cout << s <<endl; 
    return 0;
}