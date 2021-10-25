
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

    char s[101];
    int t;
    cin>>t;
    while(t--)
    {

        cin>>s;
        int i,k=strlen(s);
        for(i=0;i<k;i++)
        {
            if(i!=2 && (i==1 ||i%2==0))
            {
            cout<<s[i];
            }
        }

        if(k>2) cout<<s[k-1];
        cout<<endl;
    }


}
