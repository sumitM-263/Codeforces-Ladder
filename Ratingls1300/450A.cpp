#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    queue<pair<int,int>> q;

    for(int i=1;i<=n;i++){
        int a;
        cin >> a;
        q.push({i,a});
    }

    int last_child=0;
    int child;
    int req_candies;
    while(!q.empty()){
        child=q.front().first;
        req_candies=q.front().second;
        q.pop();

        req_candies-=m;

        if(req_candies>0){
            q.push({child,req_candies});
        }
    }

    if(q.empty()){
        last_child=child;
    }

    cout << last_child << endl;

    return 0;
}