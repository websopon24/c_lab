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

        int w,h,n;
        cin>>w>>h>>n;
        int sum=1;

            if(!(w%2))
            while(!(w%2)){sum*=2;w/=2;}
            if(!(h%2))
            while(!(h%2)){sum*=2;h/=2;}

        if(sum>=n)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
