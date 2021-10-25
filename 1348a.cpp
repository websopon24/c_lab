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
        int n,a,b,t1=0,t2=0;
        cin>>n;

        a=b=0;
        if(n==2) {
            cout<<"2"<<endl;
            continue;

        }
        a=pow(2,n);
        for (int i=1;i<n/2 ;i++ )
            a+=pow(2,i);

       for (int i=n-1;i>=n/2 ;i-- )
            b+=pow(2,i);
            //cout<<a<<" "<<b<<endl;

        cout<<a-b<<endl;

    }

}
