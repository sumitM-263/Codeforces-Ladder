#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int x=0,y=0,z=0;
    int n1,n2,n3;

    for(int i=0;i<n;i++){
        cin >> n1 >> n2 >> n3;
        x+=n1;
        y+=n2;
        z+=n3;
        
    }

    
    if(x==0 and y==0 and z==0) cout << "YES" <<endl;
    else cout << "NO" <<endl;
}