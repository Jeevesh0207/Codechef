Question Link :- (" https://www.codechef.com/problems/LOSTMAX?tab=statement ")

#include <iostream>
using namespace std;
#define ll long long int
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll v[51]={0};
  ll cnt=0,n=0,max=0;
  for(ll i=0;i<51;i++){
    cin>>v[i];
    char c;
    cnt++;
    c=getchar();
    if(c=='\n') break;
  }
  
  for(ll i=0;i<cnt;i++){
    if(v[i]==0) break;
    n++;
  }
  for(ll i=0;i<n;i++){
    if(v[i]==n-1) {
        v[i]=0;
        break;
    }
  }
  for(ll i=0;i<n;i++)if(v[i]>max) max=v[i];
  cout<<max<<endl;
	}
	return 0;
}
