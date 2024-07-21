#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<vector<int>> A;
    int a;
    

    for(int i=0;i<3;i++){
        vector<int> nums;
        for(int j=0;j<3;j++){
            cin >> a;
            a=a%2;
            nums.push_back(a);
        }
        A.push_back(nums);
    }

    vector<vector<int>> L={
        {1,1,1},
        {1,1,1},
        {1,1,1}
    };

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           if(A[i][j]==1){
                L[i][j]=1-L[i][j];

                // toggle upper value
                if(i-1>=0){
                    L[i-1][j]=1-L[i-1][j];
                }

                // toggle lower value
                if(i+1<3){
                    L[i+1][j]=1-L[i+1][j];
                }

                // toggle right value
                if(j+1<3){
                    L[i][j+1]=1-L[i][j+1];
                }

                // toggle left value
                if(j-1>=0){
                    L[i][j-1]=1-L[i][j-1];
                }
                
           }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) cout << L[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}