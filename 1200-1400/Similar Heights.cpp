Question Link :-(" https://www.codechef.com/problems/HEIGHTS?tab=statement ")

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
  map<ll,ll>mp;
  ll mx=0;
 for(ll i=0;i<n;i++){
   ll x;
   cin>>x;
   mp[x]++;
   mx=max(mx,x);
 }
 ll cnt=0;
 ll mx2=0; 
 for(auto i:mp){
  if(i.second==1) cnt++;
   mx2=max(mx2,i.second);
 }
 if(cnt%2==0) cout<<cnt/2<<endl;
 else{
     if(mp[mx]==1 && mx2==2) cnt++;
     cout<<(cnt/2) +1<<endl;
 }

 
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
