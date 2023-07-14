Question Link :- (" https://www.codechef.com/problems/CHEFLR?tab=statement ")

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastinOut ios::sync_with_stdio(false); cin.tie(0);
#define TimeStart auto start = chrono::high_resolution_clock::now();
#define TimeEnd auto stop = chrono::high_resolution_clock::now();
#define Time  long double duration = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();

ll MOD=1000000007;

void Rabbit(){
  string s;
  cin>>s;
  ll ans=1;
  for(ll i=1;i<=s.size();i++){
    if(i%2){
        if(s[i-1]=='l') ans=(2*ans);
        else ans=(2*ans)+2;
    }
    else{
        if(s[i-1]=='l') ans=(2*ans)-1;
        else ans=(2*ans)+1;
    }
    ans%=MOD;
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
