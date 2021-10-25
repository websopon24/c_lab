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

        int n,d;
        cin>>n>>d;
        int a[101];
        for (int i=0;i<n ;i++ )
            cin>>a[i];

            sort(a,a+n);

           a[0]+a[1]<=d ||a[n-1]<=d?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }

}
