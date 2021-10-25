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
    int t,t1,t2,n,a[50];
    cin>>t;
    while(t--)
     {
         t1=t2=0;
         cin>>n;
         for (int i=0;i<n ;i++ )
         {
             cin>>a[i];
             if(i%2==0 && a[i]%2!=0) t1++;
             if(i%2!=0 && a[i]%2==0) t2++;
         }
         if (t1!=t2)
            cout<<"-1\n" ;
            else cout<<t2<<endl;

     }
}
