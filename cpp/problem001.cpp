#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int long long

void run_a_case(int tc){
    int ans=0;
    for(int i=3;i<1000;i++){
        if(i%3==0 || i%5==0) ans+=i;
    }
    cout<<ans<<"\n";
    return;
}

int32_t main(){
    fast_io
    run_a_case(0);
    return 0;
}
