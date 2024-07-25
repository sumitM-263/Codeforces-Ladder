#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a,b;
    int onef=0,zerof=0,ones=0,zeros=0;
    for(int i=0;i<n;i++){
        cin >> a >> b;

        if(a==0) zerof++;
        else if(a==1) onef++;
        
        if(b==0) zeros++;
        else if(b==1) ones++;
    }

    int cnt=0;

    if((onef==n || zerof==n) and (ones==n || zeros==n)){
        cout << cnt << endl;
    }

    else{
        // for left doors
        if(onef>=zerof){
            cnt+=zerof;
        }

        else if(zerof>onef){
            cnt+=onef;
        }

        // for right doors
        if(ones>=zeros){
            cnt+=zeros;
        }
        else  if(zeros>ones){
            cnt+=ones;
        }

        cout << cnt <<endl;
    }

    return 0;
}