
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
{   int t;
    int n,k;
    int a[32],b[32];

    cin>>t;

    while(t--)
    {

        cin>>n>>k;
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n;i++)
            cin>>b[i];

            sort(a,a+n);
            sort(b,b+n);
            int m;

             /*for(int i=0;i<n;i++)
            cout<<a[i]<<",";
             cout<<endl;

             for(int i=0;i<n;i++)
            cout<<b[i];
             cout<<endl;*/

             m=0;

             for(int i=0;i<k;i++)
            {

                if(a[i]<b[n-i-1])
                    swap(a[i],b[n-i-1]);
            }

              for(int i=0;i<n;i++)
            {

                m+=a[i];
            }

           cout<<m<<endl;

    }


}
