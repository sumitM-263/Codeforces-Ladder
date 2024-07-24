#include <bits/stdc++.h>
using namespace std;

int arr[100001]={0};

int main(){
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;

    int i=k,j=l,x=m,y=n;
    while(i<=d){
        arr[i]+=1;
        i+=k;
    }

    while(j<=d){
        arr[j]+=1;
        j+=l;
    }

    while(x<=d){
        arr[x]+=1;
        x+=m;
    }

    while(y<=d){
        arr[y]+=1;
        y+=n;
    }

    int cnt=0;
    for(int i=1;i<=d;i++){
        if(arr[i]==0){
            cnt++;
        }
    }
    
    cout << d - cnt <<endl;

}