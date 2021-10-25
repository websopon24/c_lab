
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
        ll k=2000000000,l=2000000000;
        ll a[51],b[50],n;
        cin>>n;
        for (int i=0;i<n ;i++ )
            {
                cin>>a[i];
               k=min(k,a[i]);
            }

        for (int i=0;i<n ;i++ )

            {
                cin>>b[i];
               l=min(l,b[i]);

            }
           // cout<<k<<" "<<l<<endl;
            ll sum=0;

             for(int i=0;i<n ;i++ )
             {
                 sum+=max(a[i]-k,b[i]-l);
             }
             cout<<sum<<endl;
    }


}
