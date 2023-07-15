Question Link :- (" https://www.codechef.com/problems/MNMX?tab=statement ")

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastinOut ios::sync_with_stdio(false); cin.tie(0);
#define TimeStart auto start = chrono::high_resolution_clock::now();
#define TimeEnd auto stop = chrono::high_resolution_clock::now();
#define Time  long double duration = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();

bool is_plan(string s){
    string str=string(s.rbegin(),s.rend());
    return (s==str)?1:0;
}


void Rabbit(){
   ll n;
   cin>>n;
   vector<ll>v(n);
   for(auto &i:v) cin>>i;
   sort(v.begin(),v.end());
   cout<<v[0]*(n-1)<<endl;
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
