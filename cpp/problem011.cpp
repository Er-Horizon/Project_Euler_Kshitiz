/***
PROBLEM 11
Answer = 70600674
Time Complexity=O(n^2)
***/

#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int long long

void run_a_case(int tc){
    vector<vector<int>> v(20,vector<int> (20));
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++) cin>>v[i][j];
    }
    int ans=0,cur;
    for(int i=0;i<17;i++){
        for(int j=0;j<20;j++){
            cur=((v[i][j]*v[i+1][j])*(v[i+2][j]*v[i+3][j]));
            ans=max(ans,cur);
        }
    }
    for(int i=0;i<20;i++){
        for(int j=0;j<17;j++){
            cur=((v[i][j]*v[i][j+1])*(v[i][j+2]*v[i][j+3]));
            ans=max(ans,cur);
        }
    }
    for(int i=0;i<17;i++){
        for(int j=0;j<17;j++){
            cur=((v[i][j]*v[i+1][j+1])*(v[i+2][j+2]*v[i+3][j+3]));
            ans=max(ans,cur);
        }
    }
    for(int i=0;i<17;i++){
        for(int j=3;j<20;j++){
            cur=((v[i][j]*v[i+1][j-1])*(v[i+2][j-2]*v[i+3][j-3]));
            ans=max(ans,cur);
        }
    }
    cout<<ans<<"\n";
    return;
}

int32_t main(){
    fast_io
    run_a_case(0);
    return 0;
}
