Question Link :- (" https://www.codechef.com/problems/XORNEY?tab=statement ")

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

inline void fast_io(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

ll computeXOR(ll n)
{
   
  if (n % 4 == 0)
    return n;
 
  if (n % 4 == 1)
    return 1;
 
  if (n % 4 == 2)
    return n + 1;
 
  return 0;
}


int main() {
    fast_io();
    ll t;
    cin>>t;
    while(t--){
        	ll l,r;
  cin>>l>>r;
  ll x1= computeXOR(l-1);
  ll x2=computeXOR(r);
  ((x1^x2) %2 == 0)?cout<< "Even\n" : cout << "Odd\n";
    }
	return 0;
}
