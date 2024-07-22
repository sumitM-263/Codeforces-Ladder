#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    int cnt=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cnt++;
            if((n/i)!=i){
                cnt++;
            }
        }
    }

    if(cnt==2) return true;
    else return false;
}

int main(){
    int n,m;
    cin >> n >> m;

    while(true){
        n+=1;

        // check Prime
        bool isPrime=checkPrime(n);

        if(isPrime and n==m){
            cout << "YES" << endl;
            break;
        }
        else if(isPrime and n!=m){
            cout << "NO" << endl;
            break;
        }
    }

    return 0;
}