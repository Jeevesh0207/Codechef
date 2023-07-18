Question Link :- (" https://www.codechef.com/problems/NOTINCOM ")

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastinOut ios::sync_with_stdio(false); cin.tie(0);
#define TimeStart auto start = chrono::high_resolution_clock::now();
#define TimeEnd auto stop = chrono::high_resolution_clock::now();
#define Time  long double duration = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();




void Rabbit(){
  ll n,m;
  cin>>n>>m;
  map<int,int>mp;
  for(ll i=0;i<n;i++){
    ll x;cin>>x;
    mp[x]++;
  }
  ll ans=0;
  for(ll i=0;i<m;i++){
    ll x;cin>>x;
    if(mp.find(x)!=mp.end()) ans++;
  }
  cout<<ans<<endl;
}

 
int main(){
    FastinOut;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    TimeStart;
    ll T=1;
    cin>>T;
    while(T--){
        Rabbit();
    }
    TimeEnd; 
    Time;
    #ifndef ONLINE_JUDGE
        std::cerr << "Time taken : " << duration / 1e9 << "s" << std::endl;     
    #endif
    return 0;
}
