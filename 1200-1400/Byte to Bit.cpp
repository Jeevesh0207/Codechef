Question Link :- (" https://www.codechef.com/problems/BITOBYT?tab=statement ")

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
  ll Left=(n-1)%26;
  n=(n-1)/26;
  n=pow(2,n);
  if(Left<2) cout<<n<<" 0 0"<<endl;
  else if(Left<10) cout<<"0 "<<n<<" 0"<<endl;
  else cout<<"0 0 "<<n<<endl;

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
