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

        int a,b;
        cin>>a>>b;
        if(a==b) cout<<"0"<<endl;
        else if(a<=10 && b<=10) cout<<"1"<<endl;
        else if(a>b) {
                a-=b;
            int sum=0;
            sum+=a/10;
            if(a%10) sum++;
        cout<<sum<<endl;

        }

        else{
                b-=a;
            int sum=0;
            sum+=b/10;
            if(b%10) sum++;
        cout<<sum<<endl;

        }

    }

}
