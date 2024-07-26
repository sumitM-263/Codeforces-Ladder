#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cap=INT_MIN;
    int a,b;
    int ans=0;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        ans=ans+b-a;
        cap=max(cap,ans);
    }

    if(ans==0) cout << cap << endl;

    return 0;
}