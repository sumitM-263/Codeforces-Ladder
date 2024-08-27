#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> v(n);

    int ind=-1;
    int minTime=INT_MAX;

    for(int i=0;i<n;i++){
        cin>>v[i];

       minTime=min(minTime,v[i]);
    }

    int cnt=0;
    for(int i=0;i<n;i++){
        if(minTime==v[i]){
            cnt++;
            ind=i;
        }
    }

    if(cnt==1) cout << ind+1 <<endl;
    else if(cnt>1) cout << "Still Rozdil" <<endl;

}