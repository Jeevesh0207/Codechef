Question Link :- (" https://www.codechef.com/problems/DEPCHEF?tab=statement ")

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
  vector<ll>attack(n),defence(n);
  for(ll i=0;i<n;i++){
    cin>>attack[i];
  }
  for(ll i=0;i<n;i++){
    cin>>defence[i];
  }
  ll ans=-1;
  for(ll i=0;i<n;i++){
    if(i==0){
      ll L=n-1;
      ll R=i+1;
      ll power=attack[L]+attack[R];
      if(defence[i]>power){
        ans=max(ans,defence[i]);
      
      }
    }
    else if(i==n-1){
      ll L=i-1;
      ll R=0;
      ll power=attack[L]+attack[R];
      if(defence[i]>power){
        ans=max(ans,defence[i]);
        
      }
    }
    else{
      ll L=i-1;
      ll R=i+1;
      ll power=attack[L]+attack[R];
      if(defence[i]>power){
        ans=max(ans,defence[i]);
        
      }
    }

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
