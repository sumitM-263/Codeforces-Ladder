#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a;
    vector<int> points(n);
    for(int i=0;i<n;i++){
        cin >> a;
        points[i]+=a;
    }

    int m=points[0];
    int M=points[0];
    int ans=0;
    for(int i=0;i<n;i++){

        if(points[i]<m){
            ans+=1;
            m=points[i];
        }

        if(points[i]>M){
            ans+=1;
            M=points[i];
        }
    }

    cout << ans <<endl;
    return 0;
}