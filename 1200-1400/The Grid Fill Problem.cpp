Question Link:- (" https://www.codechef.com/problems/FILLGRID ")

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
   if(n==2){
    cout<<"-1 -1"<<endl;
    cout<<"-1 -1"<<endl;
   }
   else{
    for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
        if(i==j)cout<<"-1"<<" ";
        else cout<<"1"<<" ";
    }
    cout<<endl;
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
