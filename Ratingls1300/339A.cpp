#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    vector<int> nums;

    for(int i=0;i<s.size();i+=2){
        int a=s[i]-'0';
        nums.push_back(a);
    }

    sort(nums.begin(),nums.end());

    for(int i=0;i<nums.size()-1;i++){
        char k=48+nums[i];
        cout << k << '+';
        
    }
    

    cout <<nums[nums.size()-1] << endl;

    return 0;
}