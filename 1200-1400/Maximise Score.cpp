Question Link:-(" https://www.codechef.com/problems/MAXIMSCORE?tab=statement ")

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastinOut ios::sync_with_stdio(false); cin.tie(0);
#define TimeStart auto start = chrono::high_resolution_clock::now();
#define TimeEnd auto stop = chrono::high_resolution_clock::now();
#define Time  long double duration = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();


void Rabbit(){
  ll n;
  cin>>n;
  vector<ll>v(n);
  for(auto &i:v) cin>>i;
  ll ans=min(abs(v[0]-v[1]),abs(v[n-1]-v[n-2]));
  for(ll i=1;i<n-1;i++){
     ll d=max(abs(v[i]-v[i+1]),abs(v[i]-v[i-1]));
     ans=min(ans,d);
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
