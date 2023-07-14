
#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define pb push_back
#define loop(n) for(long long i=0;i<n;i++)
#define rloop(n) for(long long i=n-1;i>=0;i--)

////////////////////////////////////////////
 
ll m=1e9+7;

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return (res%m * res%m * a)%m;
    else
        return res%m * res%m;
}


//////////////////////////////////////////////////


//////////////////////////////////////////////

signed main(){

      ios::sync_with_stdio(false);
      cin.tie(nullptr);

      #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output1.txt","w",stdout);
       #endif

       string s;
       cin >> s;
       
       int n=s.size();
       std::vector<ll> dp(n,0);
        
        stack<int>st;
        ll ans=0;
       loop(n){

          
           if(s[i]=='('){
            st.push(i);
            continue;
           }
           if(st.empty())continue;
           
            int x=st.top();
            dp[i]=(i-x)+1+(x>=1?dp[x-1]:0);
            st.pop();
           
       ans=max(ans,dp[i]);
       }
       
       //max length of rbs
       cout<<ans<<"\n";



    return 0;
}


