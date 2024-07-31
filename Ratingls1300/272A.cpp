#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> a(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }

    vector<int> nums(5);

    for(int i=0;i<5;i++){
        nums[i]+=sum+(i+1);
    }

    int cnt=0;
    for(int i=0;i<5;i++){
        if(nums[i]%(n+1)!=1){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}