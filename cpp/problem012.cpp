/***
PROBLEM 12
Answer = 76576500
Time Complexity=O(n)
***/

#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int long long

vector<pair<int,int>> allfac(int n){
    int x=2,fr=0;
    vector<pair<int,int>> ans;
    while(n>1){
        while(n%x==0){
            n/=x;
            fr++;
        }
        if(fr>0) ans.push_back({x,fr});
        x++;
        fr=0;
    }
    return ans;
}

int total_div(vector<pair<int,int>> a,vector<pair<int,int>> b){
    int ans=1,i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i].first==b[j].first){
            if(a[i].first==2) ans*=(a[i].second+b[j].second);
            else ans*=(a[i].second+b[j].second+1);
            i++;
            j++;
        }else if(a[i].first<b[j].first){
            if(a[i].first==2) ans*=(a[i].second);
            else ans*=(a[i].second+1);
            i++;
        }else{
            if(b[j].first==2) ans*=(b[j].second);
            else ans*=(b[j].second+1);
            j++;
        }
    }
    while(i<a.size()) ans*=(a[i++].second+1);
    while(j<b.size()) ans*=(b[j++].second+1);
    ans+=1;
    return ans;
}

void run_a_case(int tc){
    vector<pair<int,int>> pre,cur;
    int cn=3,div;
    pre.push_back({2,1});
    while(1){
        cur=allfac(cn);
        div=total_div(pre,cur);
        if(div>=500) break;
        pre=cur;
        cn++;
    }
    int ans=(cn*(cn-1))/2;
    cout<<ans<<"\n";
    return;
}

int32_t main(){
    fast_io
    run_a_case(0);
    return 0;
}
