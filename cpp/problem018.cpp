/***
PROBLEM 18
Answer = 1074
Time Complexity=O(n^2)
***/

#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int long long

void run_a_case(int tc){
    vector<vector<int>> dp(15,vector<int> (15));
    for(int i=0;i<15;i++){
        for(int j=0;j<=i;j++) cin>>dp[i][j];
    }
    for(int i=1;i<15;i++){
        dp[i][0]+=dp[i-1][0];
        for(int j=1;j<i;j++){
            dp[i][j]+=max(dp[i-1][j],dp[i-1][j-1]);
        }
        dp[i][i]+=dp[i-1][i-1];
    }
    int ans=0;
    for(int i=0;i<15;i++) ans=max(ans,dp[14][i]);
    cout<<ans<<"\n";
    return;
}

int32_t main(){
    fast_io
    run_a_case(0);
    return 0;
}
