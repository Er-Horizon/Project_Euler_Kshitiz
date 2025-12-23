/***
PROBLEM 15
Answer = 137846528820
Time Complexity=O(1)
***/

#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int long long

int nCr(int n,int r){
    int ans=1,cur=r+1;
    for(int i=1;i<=r;i++){
        ans*=cur;
        ans/=i;
        cur++;
    }
    return ans;
}

void run_a_case(int tc){
    int ans=nCr(40,20);
    cout<<ans<<"\n";
    return;
}

int32_t main(){
    fast_io
    run_a_case(0);
    return 0;
}
