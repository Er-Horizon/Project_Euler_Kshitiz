/***
PROBLEM 13
Answer = 5537376230
Time Complexity=O(100*(~50))=O(n)
***/

#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int long long

string add(string a,string b){
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    string ans;
    int cur=0;
    for(int i=0;i<50;i++){
        cur+=(a[i]-'0');
        cur+=(b[i]-'0');
        ans+=('0'+(cur%10));
        cur/=10;
    }
    for(int i=50;i<a.size();i++){
        cur+=(a[i]-'0');
        ans+=('0'+(cur%10));
        cur/=10;
    }
    while(cur>0){
        ans+=('0'+(cur%10));
        cur/=10;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

void run_a_case(int tc){
    string ans="00000000000000000000000000000000000000000000000000",cur;
    for(int i=0;i<100;i++){
        cin>>cur;
        ans=add(ans,cur);
    }
    ans=ans.substr(0,10);
    cout<<ans<<"\n";
    return;
}

int32_t main(){
    fast_io
    run_a_case(0);
    return 0;
}
