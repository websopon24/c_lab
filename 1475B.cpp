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
       int n;
       cin>>n;
       if(n>=2020 &&(n%2021==0 ||n%2020==1||n%2020==0))
        cout<<"YES"<<endl;
       else         cout<<"NO"<<endl;

   }
}
