#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin >> n;

    int lucky=0;

    while(n!=0){
        int r=n%10;
        if(r==4 or r==7) lucky++;
        n=n/10;
    }

    if(lucky==4 or lucky==7) cout << "YES" << endl;
    else cout << "NO" <<endl;
}