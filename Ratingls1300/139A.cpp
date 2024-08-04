#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    queue<pair<int,int>> q;

    for(int i=1;i<=7;i++){
        int a;
        cin >> a;
        q.push({i,a});
    }

    int day,pages;
    int leftPages=n;
    while(leftPages>0){

        day=q.front().first;
        pages=q.front().second;
        q.pop();

        leftPages-=pages;
        if(leftPages>0){
            q.push({day,pages});
        }
    }

    cout << day <<endl;

}