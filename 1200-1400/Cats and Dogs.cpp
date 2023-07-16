Question Link :- (" https://www.codechef.com/problems/CATSDOGS?tab=statement ")

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastinOut ios::sync_with_stdio(false); cin.tie(0);
#define TimeStart auto start = chrono::high_resolution_clock::now();
#define TimeEnd auto stop = chrono::high_resolution_clock::now();
#define Time  long double duration = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();


void Rabbit(){
 ll c,d,l;
 cin>>c>>d>>l;
 string ans="no";
	if(l%4==0){
	  if(c<2*d){
	    if(l>=(d*4) && l<=(c+d)*4)
	      ans="yes";
	  }
	  else{
	    ll temp=c-(2*d);
	    if(l>=((temp+d)*4) && l<=(c+d)*4)
	      ans="yes";
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
