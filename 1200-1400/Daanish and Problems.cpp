Question Link :- (" https://www.codechef.com/problems/DIV03?tab=statement ")

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastinOut ios::sync_with_stdio(false); cin.tie(0);
#define TimeStart auto start = chrono::high_resolution_clock::now();
#define TimeEnd auto stop = chrono::high_resolution_clock::now();
#define Time  long double duration = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();




void Rabbit(){
  ll arr[10];
  for(ll i=9;i>=0;i--){
    cin>>arr[i];
  }
  ll k;
  cin>>k;
  for(ll i=0;i<10;i++){
    if(arr[i]>0){
      if(k-arr[i]>=0){
        k-=arr[i];
        arr[i]=0;
      }
      else{
        arr[i]-=k;
        break;
      }
    }
  }

  for(ll i=0;i<10;i++){
    if(arr[i]!=0){
      cout<<10-i<<endl;
      break;
    }
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
