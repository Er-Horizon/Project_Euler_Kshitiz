#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int long long

void run_a_case(int tc){
    int ans=0,b=1,a=2,c;
    do{
        if(!(a&1LL)) ans+=a;
        c=a+b;
        b=a;
        a=c;
    }while(a<=4000000);
    cout<<ans<<"\n";
    return;
}

int32_t main(){
    fast_io
    run_a_case(0);
    return 0;
}
