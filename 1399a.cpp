
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
    int t,n;
    int a[51];
    cin>>t;
    while(t--)
    {  cin>>n;

        for(int i=0;i<n;i++)
            cin>>a[i];
            sort(a,a+n);

           int k=0;
            for(int i=1;i<n;i++)
            {
               if(a[i]-a[i-1]>1) k++;
            }
            if(k==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

    }


}
