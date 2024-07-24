#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n%2==1){
        cout << -1 <<endl;
        return 0;
    }


    vector<int> nums(n+1);

    for(int i=1;i<=n;i++){
        nums[i]+=i;
    }

    int i=1;

    while(i<n+1){
        swap(nums[i],nums[i+1]);
        i+=2;
    }

    for(int i=1;i<=n;i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;

}






















// BRUTE FORCE BUT NOT MUCH GOOD
// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> nums(n+1);
//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         nums[i]+=a;
//         a++;
//     }

//     // for(int i=0;i<=n;i++){
//     //     cout << nums[i] <<" ";

//     // }
//     // cout << endl;
    

//     bool hasNext = true;
    
//     while(hasNext){
        

//         int cnt=0;
//         for (int i = 1; i <= n; i++)
//         {
//             if (nums[nums[i]] == i and nums[i]!=i)
//             {
//                 cnt++;
                
//             }


//         }

//         if(cnt==n){
//             for(int i=1;i<=n;i++) cout << nums[i] <<" ";
//             cout << endl;
//             return 0;
//         }

//         // cout << hasNext << endl;

//         hasNext = next_permutation(nums.begin()+1, nums.end());

//     }

//     cout << -1 << endl;

//     return 0;
// }