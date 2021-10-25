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
        if(n<=9) {
            cout<<n<<endl;
            continue;
        }

        int sum=9;
        int k=n;
        int t1=1;
        int r1=k%10;
        int r2;
        k=k/10;

        while(k && t1 && n>100)
        {
            r2=k%10;
            if(r1<r2 || r2==0|| r1==0) t1=0;
            k=k/10;

        }
        if(t1)
        cout<<sum+n/10<<endl;
        else if(n>100 && r1==0) cout<<sum+n/10-1-1<<endl;
        else cout<<sum+n/10-1<<endl;


    }

}
