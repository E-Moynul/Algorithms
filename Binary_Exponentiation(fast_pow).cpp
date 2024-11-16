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

    ll n1,n2,mod ;
    cout << "Enter number and power :\n" << endl ;
    cin >> n1 >> n2 ;
    cout << endl ;
    cout << n1 << " ^ " << n2 << " = " << mod_expo(n1,n2,1e18) << endl ;
}

