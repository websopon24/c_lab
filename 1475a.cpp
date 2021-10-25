#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


const double PI = acos(-1);


#define PB push_back
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (abs(a*b)/gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        int t=1;
        if(n%2==1) {
            cout<<"YES"<<endl;
            continue;
        }

      while(n%2==0)
      {
          n=n/2;
      }
      if(n%2&&n>1)  cout<<"YES"<<endl;
      else  cout<<"NO"<<endl;
}}
