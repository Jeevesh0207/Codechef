Question Link :- (" https://www.codechef.com/problems/RECNDNOS ")

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
  map<ll,ll>mp1,mp2;
  for(ll i=0;i<n;i++) cin>>v[i];
  for(ll i=0;i<n;i++){
    if(mp1[v[i]]){
       if(i!=mp2[v[i]]+1){
         mp1[v[i]]++;
         mp2[v[i]]=i;
       }
    }
    else {
        mp1[v[i]]++;
        mp2[v[i]]=i;
    }
  }
  ll mn=INT_MIN,Type=0;
  for(auto i:mp1){
    if(i.second>mn ){
       Type=i.first;
       mn=i.second;
    }
  }
  cout<<Type<<endl;
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
