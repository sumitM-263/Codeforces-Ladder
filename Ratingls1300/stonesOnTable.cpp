#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    string s;
    cin >> s;

    char last=s[0];
    int count=0;

    int i=1;
    while(i<s.size()){
        if(s[i]==last){
            count++;
        }

        else{
            last=s[i];
        }
        i+=1;
    }

    cout << count << endl;
}