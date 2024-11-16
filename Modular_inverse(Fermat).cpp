#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long int;
const int N = 1e9+7 ;

ll mod_expo(ll a, ll b, ll mod)///BINARY EXPONENTIATION (FAST POWER)
{
    ll ans = 1 ;

    a = a % mod ;

    while(b>0)
    {
        if(b % 2 !=0)
        {
            ans = (ans * a) % mod ;
        }
        a = (a * a) % mod ;
        b /= 2 ;
    }

    return ans ;
}

int main()
{

    cout << "Enter the number and the mod(must be prime) for which you want modular inverse :\n" << endl ;
    ll n1,n2,ans ;
    cin >> n1 >> n2 ;
    if(__gcd(n1,n2)!=1)
    {
        cout << "Modular inverse doesn't exist \n" << endl ;
        return 0 ;
    }
    cout << endl ;
    ans=mod_expo(n1,n2-2,n2) ;
    cout << "Modular inverse of " << n1 << " mod " << n2 << " is : " << ans << endl ;
}


