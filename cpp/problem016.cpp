/***
PROBLEM 16
Answer = 1366
Time Complexity=O(n)
***/

#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int long long

void mul(string &a){
    int cur=0,i=0;
    while(i<a.size()){
        cur+=(2*(a[i]-'0'));
        a[i]=('0'+(cur%10));
        cur/=10;
        i++;
    }
    while(cur>0){
        a+=('0'+(cur%10));
        cur/=10;
    }
}

void run_a_case(int tc){
    string num="1";
    for(int i=0;i<1000;i++){ mul(num);}
    int ans=0;
    for(auto i:num) ans+=(i-'0');
    cout<<ans<<"\n";
    return;
}

int32_t main(){
    fast_io
    run_a_case(0);
    return 0;
}
