#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,x,y;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin >> a;
            if(a==1){
                x=i;
                y=j;
                
            }
        }
    }

    int ans=abs(x-3)+abs(y-3);
    cout << ans <<endl;
    return 0;
}