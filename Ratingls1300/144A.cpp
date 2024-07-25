#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a;
    int m=INT_MAX;
    int M=INT_MIN;

    vector<int> h;

    for(int i=0;i<n;i++){
        cin >> a;
        h.push_back(a);
        if(a>M) M=a;
        if(a<m) m=a;
    }

    // cout << m << " " << M << endl;

    int mInd=-1;
    int MInd=n;

    for(int i=0;i<n;i++){
        if(h[i]==m and i>mInd){
            mInd=i;
        }

        if(h[i]==M and i<MInd){
            MInd=i;
        }
    }

    // cout << mInd << " " << MInd << endl;

    int ans=0;

    if(mInd>MInd){
        ans+=abs(mInd-(n-1))+ abs(MInd-0);
    }

    else if(mInd<MInd){
        ans+=abs(mInd+1-(n-1))+abs(MInd-0);
    }

    cout << ans <<endl; 

    return 0;
}