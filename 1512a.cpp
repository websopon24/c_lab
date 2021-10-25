
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
        int a[101];
        cin>>n;
        int t1=0;
        map<int ,int>m;
        for (int i=0;i<n ;i++ )
            {
                cin>>a[i];
                int k=++m[a[i]];
                if(k==1 && i>0&&a[i]!=a[i-1]) t1=i+1;
            }
            if(a[0]!=a[1] && a[0]!=a[2])
            cout<<"1"<<endl;
            else
                            cout<<t1<<endl;

    }


}
